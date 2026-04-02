#include <stdio.h> 

int main() {
	char First_Name1[10] = "Ahmet";
	char First_Name2[10] = "Huseyin";
	char Last_Name[10] = "ARSLAN";
	long long int student_ıd = 22220120070;
	printf("Workshop 1 Part-1");
	printf("\n=================");
	printf("\n\nI'm displaying this using the 'printf' stdio");
	printf("\n(standard input output) library function!");
	printf("\n\nDear Teacher");
	printf("\n\n\tI promise I will work hard from this day onward.");
	printf("\n \tI acknowledge that practive is extremely important,");
	printf("\n \tso I will do all workshops, quizzes, and assigments.\n");
	printf("\nSincerely,\n");
	printf("\n%s %s %s",First_Name1, First_Name2, Last_Name);
	printf("\nStudent ID# %lld", student_ıd);

	return 0;
}

