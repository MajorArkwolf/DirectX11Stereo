cmake_minimum_required(VERSION 3.14)
project(DX10Texture VERSION 0.1.0)
add_definitions(-D_AFXDLL)
set(CMAKE_MFC_FLAG 2)


list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_executable(DX10Texture WIN32)
add_subdirectory(src)
set_target_properties (${PROJECT_NAME} PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED TRUE CXX_EXTENSIONS FALSE ) 


set(DirectX_LIB_SEARCH_PATH "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.19041.0/um")
list(APPEND DirectX_INC_SEARCH_PATH "C:/Program Files (x86)/Windows Kits/10/Include/10.0.19041.0/um")
list(APPEND DirectX_INC_SEARCH_PATH "C:/Program Files (x86)/Windows Kits/10/Include/10.0.19041.0/shared")

find_package(DirectX REQUIRED)
find_package(directxtk CONFIG REQUIRED)
find_package(directxmath CONFIG REQUIRED)

if (NOT ${DirectX_D3D11_FOUND})
    message( FATAL_ERROR "DirectX11 was not found." )
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE Microsoft::DirectXTK Microsoft::DirectXMath ${DirectX_D3D11_LIBRARIES})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/res $<TARGET_FILE_DIR:${PROJECT_NAME}>/res)