project(LinkedLists)

set(HEADER_FILES LinkedList.h Node.h) #.h
set(SOURCE_FILES LinkedList.cpp Node.cpp) #.cpp

add_library(LinkedLists_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})