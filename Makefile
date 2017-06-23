.PHONY: clean all test 
CFLAGS = -Wall -Werror

all: bin/Korni.exe 

bin/Korni.exe: build/Main.o build/Korni.o 
	gcc $(CFLAGS) build/Main.o build/Korni.o -o bin/Korni.exe -lm

build/Main.o: src/Main.c src/Korni.h
	gcc $(CFLAGS) -c src/Main.c -o build/Main.o -lm

build/Korni.o: src/Korni.c src/Korni.h 
	gcc $(CFLAGS) -c src/Korni.c -o build/Korni.o -lm
test: 
	make bin/Korni_test.exe 
	bin/Korni_test.exe 

bin/Korni_test.exe: build/test/main.o build/test/Korni_test.o
	@gcc $(CFLAGS) build/test/main.o build/test/Korni_test.o build/Korni.o -o bin/Korni_test.exe -lm
	
build/test/main.o: test/main.c src/Korni.h
	@gcc $(CFLAGS) -I thirdparty -c test/main.c -o build/test/main.o  -lm

build/test/Korni_test.o: src/Korni.h test/Korni_test.c
	@gcc $(CFlAGS) -I thirdparty -c test/Korni_test.c -o build/test/Korni_test.o  -lm 
clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@echo "Cleaning binaries"
	@rm -rf bin/Korni.exe 
	@echo "All files have been cleaned."	

-include build/*.d
