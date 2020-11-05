#include <stdio.h>
#include <stdlib.h>
int main(){
    int number;
    int answer=1;
    for(number=3;number>=1;number=number+1){
      answer=number*answer;
      printf("%d",answer);}
    printf("%d",answer);
    }
