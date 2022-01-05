add_library(quack src/stack.c include/quack/stack.h src/queue.c include/quack/queue.h src/vector.c include/vector/vector.h)
target_include_directories(quack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)