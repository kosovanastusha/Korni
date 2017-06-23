.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/Korni.exe 

bin/Korni.exe: build/Main.o build/Korni.o 
	gcc $(CFLAGS) build/Main.o build/Korni.o -o bin/Korni.exe -lm

build/Main.o: src/Main.c src/Korni.h
	gcc $(CFLAGS) -c src/Main.c -o build/Main.o -lm

build/Korni.o: src/Korni.c src/Korni.h 
	gcc $(CFLAGS) -c src/Korni.c -o build/Korni.o -lm

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@echo "Cleaning binaries"
	@rm -rf bin/Korni.exe 
	@echo "All files have been cleaned."	

-include build/*.d
