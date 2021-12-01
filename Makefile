all:
	clang -O0 -I. -Wall main.c tgc.c i4/mem.c && ./a.out