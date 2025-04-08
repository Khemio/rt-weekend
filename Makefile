CXX = g++
SRC_DIR := ./src
SRC_FILES := main.cc
SRCS := $(SRC_FILES:%=$(SRC_DIR)/%)
BUILD_DIR := ./build
TARGET := ray_tracer

all:
	$(CXX) -o $(BUILD_DIR)/$(TARGET) $(SRCS)

run:
	"$(BUILD_DIR)/$(TARGET)" > img.ppm
