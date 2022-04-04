#name of project
PROJ_NAME=main
#src files
SRC_FILES=$(wildcard *.cpp)
OBJ_FILES=$(SRC_FILES:.cpp=.o)
# compilador
CC=g++
CPP_FLAGS= -W -Wall -ansi - pedantic


all : $(PROJ_NAME)


$(PROJ_NAME): $(OBJ_FILES)
	@ echo 'Building target using g++ linker: $@'
	$(CC)  -o $@ $^ -W -Wall  -ansi -pedantic
	@ echo 'Finished building binary: $@'

%.o : %.cpp 
	@ echo 'Building object files using g++ linker: $@'
	$(CC)    -c $< -o $@  -W -Wall  -ansi -pedantic
	@ echo 'Finished building object file: $@'

clean: 
	rm *.o $(PROJ_NAME)
