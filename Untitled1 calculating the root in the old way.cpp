#include <stdio.h>


 int main() {
   char c;
   printf("Entrer un caract�re:");
   c = getchar();
   putchar(c);
   const char* toto = "\non est super content!";
   puts(toto);

}


