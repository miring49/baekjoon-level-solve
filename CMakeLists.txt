cmake_minimum_required(VERSION 3.20)
project(baekjoon-level-solve)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*.cpp")
list(FILTER SOURCES EXCLUDE REGEX ".*/cmake-build-.*")

foreach(src ${SOURCES})
    file(RELATIVE_PATH rel ${CMAKE_SOURCE_DIR} ${src})
    string(REGEX REPLACE "\\.cpp$" "" name "${rel}")

    # 허용되지 않는 문자(한글, 공백, 괄호 등)를 _로 바꾸고 정리
    string(REGEX REPLACE "[^A-Za-z0-9_.+-]" "_" name "${name}")
    string(REGEX REPLACE "_+" "_" name "${name}")
    string(REGEX REPLACE "^_|_$" "" name "${name}")

    # 이름이 겹치면 뒤에 번호를 붙임
    set(base "${name}")
    set(i 2)
    while(TARGET "${name}")
        set(name "${base}_${i}")
        math(EXPR i "${i} + 1")
    endwhile()

    add_executable("${name}" "${src}")
endforeach()