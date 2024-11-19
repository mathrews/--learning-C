all:
	nasm *.asm -felf64
	gcc -c *.c
	gcc -no-pie *.o -o test -x noexecstack