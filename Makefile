CXX = g++
# INCLUDE_PATHS := -IC:/dev/SDL2/include
# LIBRARY_PATHS := -LC:/dev/SDL2/lib
# LINKER_FLAGS := -lmingw32 -lSDL2main -lSDL2 -lSDL2_image

SRC_DIR := ./src
SRC_FILES := main.cc vec3.h color.h ray.h rtweekend.h sphere.h hittable.h hittable_list.h camera.h
SRCS := $(SRC_FILES:%=$(SRC_DIR)/%)
BUILD_DIR := ./build
EXE := ray_tracer

all:
	$(CXX) -o $(BUILD_DIR)/$(EXE) $(SRCS)

run:
	$(BUILD_DIR)/$(EXE) > img.ppm
