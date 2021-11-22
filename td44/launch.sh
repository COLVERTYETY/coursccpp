gcc -c functions.c -o build/functions.o
gcc -o build/out main.c build/functions.o
./build/out