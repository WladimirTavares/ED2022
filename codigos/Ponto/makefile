CC = g++
CFLAGS = -Wall
LDFLAGS = -lm 
OBJFILES = Ponto.o driver.o
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~