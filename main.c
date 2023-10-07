#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ans = 32;
	int num;
	int trial =0;
	
	do
	{	
		printf("Guess a number:");
		scanf("%i",&num);
		
		if(ans<num)
			printf("High!\n");
		else if(ans>num)
			printf("Low!\n");

		trial = trial + 1 ;
	}
	while (ans!=num);
	printf("Congratulation!  trials: %i \n", trial);

	return 0;
}