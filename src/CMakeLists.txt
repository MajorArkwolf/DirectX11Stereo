target_sources(${PROJECT_NAME} PRIVATE 
    "main.cpp"
    "bitmapclass.cpp"
    "cameraclass.cpp"
    "d3dclass.cpp"
    "graphicsclass.cpp"
    "inputclass.cpp"
    "systemclass.cpp"
    "textureclass.cpp"
    "textureshaderclass.cpp"
    "d3dx10math.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})