# Top-level Makefile

QD_CXXFLAGS = $(shell pkg-config qd --cflags)
QD_LIBS = $(shell pkg-config qd --libs)

CXX = g++
CXXFLAGS = -c -fPIC -I. $(QD_LIBS)
LDLIBS = -lm $(QD_CXXFLAGS)

# Find all .cpp files recursively
CPP_FILES := $(shell find . -name '*.cpp')

# Create corresponding .o object file list
OBJ_FILES := $(CPP_FILES:.cpp=.o)

all: $(OBJ_FILES)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDLIBS)

clean:
	find . -name '*.o' -delete
