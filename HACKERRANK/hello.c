#include<stdio.h>
int main()
  {
    char s[100];
    gets(s, sizeof(s), stdin);
    printf("Hello, World!.\n%s",s);
    return 0;
  }
