all: run

run: build
	./build/main

build: clean
	mkdir ./build -p
	g++ ./main.cpp -lgtest -lgtest_main -o ./build/main

clean:
	rm ./build -rf
