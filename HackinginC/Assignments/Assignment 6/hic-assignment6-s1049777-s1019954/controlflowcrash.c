#include <stdio.h>
#include <stdint.h>


void function_b(void) {
  char buffer[4];														 
	*(uint64_t*)(&buffer[0]+12) = 0xffffffff;  //  Using assembly code, I can see that the return address is 
																						 //  12 bytes after the address of the, so if you change the value
  fprintf(stdout, "Executing function_b\n"); //  it will not return to the same function, and will crash
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
