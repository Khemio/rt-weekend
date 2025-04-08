CXX = g++
# INCLUDE_PATHS := -IC:/dev/SDL2/include
# LIBRARY_PATHS := -LC:/dev/SDL2/lib
# LINKER_FLAGS := -lmingw32 -lSDL2main -lSDL2 -lSDL2_image
# vec3.h color.h ray.h rtweekend.h sphere.h hittable.h hittable_list.h camera.h utils.h

SRC_DIR := ./src
SRC_FILES := main.cc
SRCS := $(SRC_FILES:%=$(SRC_DIR)/%)
BUILD_DIR := ./build
TARGET := ray_tracer

all:
	$(CXX) -o $(BUILD_DIR)/$(TARGET) $(SRCS)

# $(BUILD_DIR)/$(EXE) > img.ppm
run:
	"$(BUILD_DIR)/$(TARGET)" > img.ppm
