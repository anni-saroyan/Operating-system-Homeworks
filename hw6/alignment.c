#include <stdio.h> int main() {
 int x = 10; 
char y = 'A';
 double z = 20.5;
 short s = 5;
 printf("Size of int: %zu bytes\n", sizeof(x));
 printf("Size of char: %zu bytes\n", sizeof(y));
 printf("Size of double: %zu bytes\n", sizeof(z));
 printf("Size of short: %zu bytes\n\n", sizeof(s));
 printf("Address of int x: %p\n", (void*)&x);
 printf("Address of char y: %p\n", (void*)&y); 
printf("Address of double z: %p\n", (void*)&z);
 printf("Address of short s: %p\n", (void*)&s);
 return 0; }

