project(LinkedLists)

set(HEADER_FILES LinkedList.h) #.h
set(SOURCE_FILES LinkedList.cpp) #.cpp

add_library(LinkedLists_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})