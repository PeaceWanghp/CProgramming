 #include <stdio.h>
 
 int main()
 {
     struct abc
     {
         int a;
         union {
             int b;
             char c;
               }d;
     }M;
 
     M.a = 100;
     M.d.b = 97;
     M.d.c = 'A';
     printf("struct:M.a=%d\n",M.a);
     printf("Union:M.d.b=%d,M.d.c=%c\n",M.d.b,M.d.c);
 
     M.d.c = 'A';
     M.d.b = 97;
     M.a = 100;
     printf("struct:M.a=%d\n",M.a);
     printf("Union:M.d.b=%d,M.d.c=%c\n",M.d.b,M.d.c);
 
     return 0;
 }
