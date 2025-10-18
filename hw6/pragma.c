
 struct Normal {
 char a; int b; double c;
 };
 
 struct Packed1 {
 char a; int b; double c;
 }; #pragma pack() #pragma pack(2)
 struct Packed2 {
 char a; int b; double c; };

 int main()
 { struct Normal n;
 struct Packed1 p1;
 struct Packed2 p2;
 printf("Without #pragma pack:\n");
 printf(" Size of Normal: %zu bytes\n", sizeof(n));
 printf("With #pragma pack(1):\n");
 printf(" Size of Packed1: %zu bytes\n", sizeof(p1));
 printf("With #pragma pack(2):\n");
 printf(" Size of Packed2: %zu bytes\n", sizeof(p2));
 return 0; }
