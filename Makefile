TARGET = Keyboard
CC = g++

SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) 
   
%.o : %.cpp
	$(CC) -cpp $< -o $@
	 
clean :
	rm $(TARGET)  *.o  
