#CC specifies which compiler we're using
CXX = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w -g

#INCLUDE_PATHS specifies the additional include paths we'll need
INCLUDE_PATHS = -I. -I../../SDL_files/include -I../headers -I../../source

#LIBRARY_PATHS specifies the additional library paths we'll need
LIBRARY_PATHS = -L../../SDL_files/lib

SRCS := $(wildcard *.cpp) 
OBJS := $(patsubst %.cpp,%.o,$(SRCS)) 

$(OBJS): $(SRCS)
	$(CXX) -std=c++11 $^ $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) -c 

clean:
	rm *.o $(OBJ_NAME)
