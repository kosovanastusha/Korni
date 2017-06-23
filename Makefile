.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/Korni.exe 

bin/Korni.exe: build/Main.o build/Korni.o 
	gcc $(CFLAGS) build/Main.o build/Korni.o -o bin/Korni.exe -lm

build/Main.o: src/Main.c src/Korni.h
	gcc $(CFLAGS) -c src/Main.c -o build/Main.o -lm

build/Korni.o: src/Korni.c src/Korni.h 
	gcc $(CFLAGS) -c src/Korni.c -o build/Korni.o -lm

test: 
	make bin/Korni.exe 
	bin/Korni.exe
	
bin/equation_test.exe: build/test/main.o build/test/function_test.o
	@gcc $(CFLAGS) build/test/main.o build/test/function_test.o build/function.o -o bin/Korni_test.exe -lm
	
build/test/main.o: test/main.c src/function.h
	@gcc $(CFLAGS) -I thirdparty -c test/main.c -o build/test/main.o  -lm

build/test/function_test.o: src/function.h test/function_test.c
	@gcc $(CFlAGS) -I thirdparty -c test/function_test.c -o build/test/function_test.o  -lm 

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@echo "Cleaning binaries"
	@rm -rf bin/Korni.exe 
	@echo "All files have been cleaned."	

#-include build/*.d
