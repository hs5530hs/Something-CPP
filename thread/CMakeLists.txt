file (GLOB HEADERS "*.h")
file (GLOB SOURCES "[^_]*.cpp")

set(BIN thread)

add_executable(${BIN} ${SOURCES})