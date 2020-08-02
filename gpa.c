#include <stdio.h>
#include <string.h>
/*
 * Title: Lab 1
 * Semester: COP4338 - Spring 2021
 * Author Megan Jane Thompson
 *
 * This program calculates the gpa of 6 student courses.
 */

//******************MAIN FUNCTION******************//
int main(){
	//creates structure for course information
	struct courseInfo{
		char courseName[10];
		float grade;
	};
	//initializes each course with course name and grade earned
	struct courseInfo course1 = {"COP2210", 4.00};
	struct courseInfo course2 = {"COP3337", 3.75};
	struct courseInfo course3 = {"COP4338", 4.00};
	struct courseInfo course4 = {"COP3530", 3.80};
	struct courseInfo course5 = {"CDA3103", 4.00};
	struct courseInfo course6 = {"CDA4101", 3.90};

	int credits = 3;       //credits for each course

	//prints the information
	printf("Student Name: Megan Thompson\n");
	printf("Panther ID: %d\n", 3276301);
	printf("%-s\t %11s\t  %10s\t  %10s\n","Course", "Credits", "Grade", "Grade Points Earned");
	printf("%-s\t %8d\t  %10.2f\t  %19.2f\n", course1.courseName, credits, course1.grade, credits*course1.grade);
	printf("%-s\t %8d\t  %10.2f\t  %19.2f\n", course2.courseName, credits, course2.grade, credits*course2.grade);
	printf("%-s\t %8d\t  %10.2f\t  %19.2f\n", course3.courseName, credits, course3.grade, credits*course3.grade);
	printf("%-s\t %8d\t  %10.2f\t  %19.2f\n", course4.courseName, credits, course4.grade, credits*course4.grade);
	printf("%-s\t %8d\t  %10.2f\t  %19.2f\n", course5.courseName, credits, course5.grade, credits*course5.grade);
	printf("%-s\t %8d\t  %10.2f\t  %19.2f\n", course6.courseName, credits, course6.grade, credits*course6.grade);
	printf("%-s\t %8d\t  %10s\t  %19.2f\n", "Total", credits*6, " ", credits*course1.grade + credits*course2.grade + credits*course3.grade +
																 	 credits*course4.grade + credits*course5.grade + credits*course6.grade);

	//calculates and prints total grade
	printf("Current GPA: %.2f\n", ((course1.grade + course2.grade + course3.grade + course4.grade + course5.grade + course6.grade)/6));
	return 0;
}
