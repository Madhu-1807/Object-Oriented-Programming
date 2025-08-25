#include<stdio.h>
#include<string.h>

struct details{
  char str[10];
  int roll_no;
  float marks;
};

void update_marks(struct details *s){
  int i;
  printf("Enter the new mark: ");
  scanf("%d", &i);
  s->marks = i;

}

int main(){
  struct details s1 = {"sai", 89, 97.5};

  printf("name: %s roll_no: %d marks: %.2f",s1.str,s1.roll_no,s1.marks);

  update_marks(&s1);
  printf("name: %s roll_no: %d marks: %.2f",s1.str,s1.roll_no,s1.marks);

  return 0;

}