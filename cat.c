#include <stdio.h>
#include <cs50.h>

void meow(int n);


int main(void)
{
    int n;
    do {
         n = get_int("Number of meows? ");
    }
    while(n < 1);
    meow(n);
}
void meow(int n) {
    for (int i = 0; i < n; i++)
  {  printf("meow\n");}
}
