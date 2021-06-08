#include <stdio.h>
#include <stdint.h>


void function_b(void) {
  char buffer[4];														 
  *(uint64_t*)(&buffer[0]+12) = (*(uint64_t*)(&buffer[0]+12))+33;	    // Again, adter analyzing the assembly code, you can see where the return address is stored on the 
									    // stack relative to the buffer, so you must overwrite this. Then, after looking at the assembly for
  fprintf(stdout, "Executing function_b\n");				    // function_a, you can see where function_b returns to, and then replace the return address with the 
									    // return address for main, and just pop back into the main function
}

void function_a(void) {
  int beacon = 0xa0b1c2d3;
  fprintf(stdout, "Executing function_a\n");
  function_b();
  fprintf(stdout, "Executed function_b\n");
}

int main(void) {
  function_a();
  fprintf(stdout, "Finished!\n");
  return 0;
}
