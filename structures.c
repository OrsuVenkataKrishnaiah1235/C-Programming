#include <stdio.h>
struct Student{
char name[20];
long int rollno;
double marks;
};//student;
int main()
{
struct Student student1={"Krishna",170452,85.20};
/*
for(int i=0;i<3;i++)
{
int a;
printf("Enter the Details 1.name 2.roll no 3.marks \n");
scanf("%d",&a);
switch(a)
{
case 1:
    printf("Enter the Name\n");
    scanf("%s",&student[i].name);
    break;
case 2:
    printf("Enter the Roll No\n");
    scanf("%d",&student[i].rollno);
    break;
case 3:
    printf("Enter the Marks\n");
    scanf("%f",&student[i].marks);
    break;
    default:printf("Entered Wrong Address No \n");
}
}*/
printf("Student Name %s\n",student1.name);
printf("Student Roll No %ld\n",student1.rollno);
printf("Student Name %lf\n",student1.marks);
}
/*
Enter the Details 1.name 2.roll no 3.marks 
1
Enter the Name
Krishna
Enter the Details 1.name 2.roll no 3.marks 
2 
Enter the Roll No
123
Enter the Details 1.name 2.roll no 3.marks 
3
Enter the Marks
85.20
Student Name Krishna
Student Roll No 123
Student Name 85.199997
*/
