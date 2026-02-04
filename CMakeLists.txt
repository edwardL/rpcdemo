# 1. 指定CMake的最低版本要求（IDEA/CLion默认3.21，兼容大部分环境，无需改）
cmake_minimum_required(VERSION 3.21)

# 2. 项目名称 + 项目语言（CXX代表C++，可省略LANGUAGES CXX，默认支持C++）
project(MyCppProject LANGUAGES CXX)

# 3. 指定C++标准（关键！推荐C++17，改20/11直接换数字即可）
# CMAKE_CXX_STANDARD_REQUIRED ON：强制使用指定标准，不兼容则报错
# CMAKE_EXTENSIONS OFF：禁用编译器扩展，保证跨平台兼容性
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 4. 生成可执行文件（核心命令）
# 格式：add_executable(可执行文件名 源文件列表)
# 可执行文件名：自定义（如MyCppProject），和项目名一致即可，运行时的程序名就是这个
# 源文件列表：单文件直接写main.cpp，路径和CMake文件同目录无需加路径
add_executable(MyCppProject main.cc)