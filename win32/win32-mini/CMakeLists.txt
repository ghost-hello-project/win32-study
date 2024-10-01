# 指定 cmake 最小版本, 意指 cmake 版本小于指定版本则构建过程终止
cmake_minimum_required(VERSION 3.26)

# 语言环境配置 ###########################################################################################################

# 语言版本
set(CMAKE_C_STANDARD 17)

# 如果指定的语言版本不受支持, 则构建过程终止
set(CMAKE_C_STANDARD_REQUIRED True)

# 只启用 ISO C++ 标准的编译器标志, 而不使用特定编译器的扩展
# set(CMAKE_C_EXTENSIONS OFF)

# 项目配置 ##############################################################################################################

# 项目名称和语言
project(win32-mini LANGUAGES C VERSION 1.0.0)

# 编译相关配置 ###########################################################################################################

# 生成 compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

aux_source_directory(. SRCS_MAIN)
add_executable(${PROJECT_NAME} WIN32 ${SRCS_MAIN})
