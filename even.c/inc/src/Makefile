CC :=gcc
CFLAGS:= Wall Wexta -std=c99 -Iinc
LDFLAG := -lm

TARGET := numUtility
SOURCES := $(wildcard  src/*.c)
HEADERS := $(wildcard  src/*.h)
OBJECTS :=$(SOURCES: .c=.o )

all:$(TARGET)

$(TARGET) : $(OBJECTS)
       $(CC) $(OBJECTS) $(LDFLAGS) -o $(TARGET)

src/% .o : src/% .c $(HEADERS)
      $(CC) -c $(CFLAGS) -c $< $@

clean :
      rm -rf src/* .o $(TARGET)
.PHONY : all clean