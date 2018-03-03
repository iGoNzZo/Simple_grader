#include <iostream>
using namespace std;

struct Student{
	double quiz1Score, quiz2Score;
	double midtermExamScore, finalExamScore;
	double fExamWeight, mExamWeight, quizWeight, grade;
	double finalGrade;
	char finalLetterGrade;
};

int main()	{
	Student record, *ptr;
	ptr = &record;
	
	cout << "Enter Quiz1 Score: ";
	cin >> (*ptr).quiz1Score;
	
	cout << "Enter Quiz2 Score: ";
	cin >> (*ptr).quiz2Score;
	
	cout << "Enter MidtermExam Score: ";
	cin >> (*ptr).midtermExamScore;
	
	cout << "Enter FinalExam Score: ";
	cin >> (*ptr).finalExamScore;
	
	(*ptr).quizWeight = ((*ptr).quiz1Score + (*ptr).quiz2Score)/ 20 * 0.25;
	(*ptr).mExamWeight = (*ptr).midtermExamScore / 100 * 0.25;
	(*ptr).fExamWeight = (*ptr).finalExamScore / 100 * 0.5;
	
	(*ptr).finalGrade = (*ptr).mExamWeight + (*ptr).fExamWeight + (*ptr).quizWeight;
	
	if((*ptr).finalGrade >= 0.90)	{
		(*ptr).finalLetterGrade = 'A';
	}
	else if((*ptr).finalGrade < 0.90 && (*ptr).finalGrade >= 0.80)	{
		(*ptr).finalLetterGrade = 'B';
	}
	else if((*ptr).finalGrade < 0.80 && (*ptr).finalGrade >= 0.70)	{
		(*ptr).finalLetterGrade = 'C';
	}
	else if((*ptr).finalGrade < 0.70 && (*ptr).finalGrade >= 0.60)	{
		(*ptr).finalLetterGrade = 'D';
	}
	else if ((*ptr).finalGrade < 0.60){
		(*ptr).finalLetterGrade = 'F';
	}
	
	cout << "\n\n----- STUDENT RECORD -----\n";
	cout << "Avg Quiz Grade: " << (*ptr).quizWeight * 100 << "\n";
	cout << "Midterm Exam Grade: " << (*ptr).mExamWeight * 100 << "\n";
	cout << "Final Exam Grade: " << (*ptr).fExamWeight * 100 << "\n";
	cout << "Final Grade Percentage: " << (*ptr).finalGrade * 100 << "\n";
	cout << "Final Course Grade: " << (*ptr).finalLetterGrade << "\n";
	
	return 0;
}