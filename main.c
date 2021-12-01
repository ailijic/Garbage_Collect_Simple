#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tgc.h"

static void example_function(void) {
  char *message = tgc_alloc(gcp_g, 64);
  strcpy(message, "No More Memory Leaks!");
	puts(message);
}

int main(int argc, char **argv) {
  tgc_start(gcp_g, &argc);
  
  void (*volatile f)(void) = example_function;
	f();

  tgc_stop(gcp_g);
}

// static char *BSS_test;
// static char *init_test = "Hello, world!";

/*
int main(void) // Adaptd from the BDWGC example.
{
  int i;
  GCInit ();

  BSS_test = GCMalloc (100);
  init_test = GCMalloc (3571); 
  
  for (i = 0; i < 1000000; ++i) {
    int *p = (int*) GCMalloc (sizeof(int));
    int *q = (int*) GCMalloc (sizeof(int));

    *p = 2323;
    *q = 484838;
    *q += *p;
    *p += *q;
    
    p = (int *) GCRealloc (q, 2 * sizeof(int));
    if (i % 100000 == 0) {
      fprintf(stderr, "Heap size = %zu\n", GC_heap_size);
      GCollect ();
    } 
  }

  GCollect ();
  fprintf(stderr, "Heap size = %zu\n", GC_heap_size);

  BSS_test = NULL;
  init_test = NULL;
  GCollect ();
  fprintf(stderr, "Heap size = %zu\n", GC_heap_size);
  return 0;
}
*/