#include <stdio.h>
#include <stdlib.h>

typedef struct subject{
	int num;
	int grade[];
}subject;

int main(void){
	int n, i, sum;
	subject *grade;
	printf("전체 학생 수를 입력: ");
	scanf("%d",&n);
	grade = (subject *)malloc(sizeof(subject)+sizeof(int)*n);
	grade->num=n;
	printf("성적 %d개를 입력하세요.\n",grade->num);
	for(i=0;i<n;i++){
		printf("%d번째 성적 : ",i);
		scanf("%d", &(grade->grade[i]));
	}
}
