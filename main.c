//Author: Hoang Bui hhb5051@psu.edu
//Collaborator: Josh Hornickle jph6089@psu.edu 
//Collaborator: Harshvardhan Singh  hms5805@psu.edu 
//Collaborator: Mitch Scavo mrs631@psu.edu 

#include <stdio.h>
#include <readline/readline.h> 
#include <stdlib.h> 

int sum_n(int n){
  if (n==0){
    return 0;
  }
  else{
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n){
  if (n==0){
    return;
  }
  else{
    printf("%s\n", s);
    print_n(s, n-1);
  }
}


int main(void) {
  char *entrance = readline("Enter an int: ");
  int entrance2 = atof(entrance);
  printf("sum is %i.\n", sum_n(entrance2));
  char *strng = readline("Enter a string: ");
  print_n(strng, entrance2);
  return 0;
}