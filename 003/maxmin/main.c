#include <stdio.h>
#include <math.h>


void min_max_signed(char* typeName, size_t bits);
void min_max_unsigned(char* typeName, size_t bits);

long long signed_min(size_t bits);
long long signed_max(size_t bits);

unsigned long long unsigned_min(size_t bits);
unsigned long long unsigned_max(size_t bits);


int main(void) {
  
  printf("Maximum and Minimum values of primitive types in C:\n\n");

  min_max_signed("char", sizeof(char));
  min_max_signed("short", sizeof(short));
  min_max_signed("int", sizeof(int));
  min_max_signed("long", sizeof(long));
  min_max_signed("long long", sizeof(long long));

  min_max_unsigned("unsigned char", sizeof(unsigned char));
  min_max_unsigned("unsigned short", sizeof(unsigned short));
  min_max_unsigned("unsigned int", sizeof(unsigned int));
  min_max_unsigned("unsigned long", sizeof(unsigned long));
  min_max_unsigned("unsigned long long", sizeof(unsigned long long));

  return 0;
}

void min_max_signed(char* typeName, size_t bits) {

  printf("\n'%s' from %lld to %lld", typeName, signed_min(bits), signed_max(bits)); 
  
}

void min_max_unsigned(char* typeName, size_t bits) {
  
  printf("\n'%s' from %lld to %lld", typeName, unsigned_min(bits), unsigned_max(bits));
  
}

long long signed_min(size_t bits) {
  return (pow(2, bits) / 2) * -1;
}

long long signed_max(size_t bits) {
  return (pow(2, bits) / 2) - 1;
}

unsigned long long unsigned_min(size_t bits) {
  return 0;
}

unsigned long long unsigned_max(size_t bits) {
  return pow(2, bits) - 1;
}
