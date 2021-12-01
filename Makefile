all:
	clang -O0 -I. -lm -Wall main.c real.c tgc.c i4/mem.c && ./a.out