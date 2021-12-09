#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int count=0;
void alram_handler(int sig){
	printf("count : %d\n",count);
	signal(SIGINT,SIG_DFL);
}
void c_handler(int sig){
	count++;
}

int main(){
	signal(SIGINT,c_handler);
	signal(SIGALRM,alram_handler);
	printf("컨트롤c를 누르고 엔터를 누르시오\n");
	getchar();
	alarm(2);
	signal(SIGINT,SIG_IGN);
	while(1){
		printf("컨트롤c를 누르고 엔터를 누르시오\n");
		getchar();
	}
	return 0;
}
