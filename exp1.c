#include <stdio.h>
int main(){
	int choice;
	printf("Enter : 1 - for Btech(CSE)\n 2 - for BTech(AI&ML)\N 3 - for BTech(ECE)\N 4 - for BTech(Mechanical)\n");
        scanf("%d ", &choice);
	switch(choice)
	{
		case 1: 
			printf("You selected Computer Science (CS).\n");
			printf("Computer Science Engineering.\n");
		case 2: 
			printf("You selected BTEch(Artificial Intelligence and Machine Learning).\n");
			printf("Artificial Intelligence and Machine Learning.\n")
		case 3:
			printf("You selected Electronics and Communication.\n");
		        printf("Electronics and Communication Engineering.\n");
		case 4:
			printf("You selected Btech(Mechanical).\n");
			printf("Mechanical Engineering.\n");
	}
        return 0;
}

