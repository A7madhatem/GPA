# include <stdio.h>
# include <stdlib.h>
struct Courses{
	float student_score;
	int credit_hours;
};
struct Student{
	float _gpa;
	int arr_courses[2];
};
float GPA (float math,float prog){
      float gpa = ((math*3)+(prog*4))/7;
      return gpa;
}
int main(){
float m,p;
printf("Enter your score in math : \n");
scanf("%f",&m);
printf("Enter your score in programming : \n");
scanf("%f",&p);
printf("Your GPA is : %f\n",GPA(m,p));
system ("pause");
return 0;
}

