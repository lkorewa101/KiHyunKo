#include <stdio.h>
int main()
{
	char schoolYear;
	char semester;
	int credit;
	double score;
	char grade;
	schoolYear = 1;
	semester = 2;
	credit = 15;
	score = 4.1;
	grade = 'A';
	printf("## %s �л��� %d�г� %d�б� ����ǥ ##\n", "���ڵ�", schoolYear, semester);
	printf("�Ҽ� : %s\n", "����Ʈ�����а�");
	printf("�̼����� : %d\n", credit);
	printf("���� : %.1f\n", score);
	printf("���� : %d\n", grade);
	return 0;
}