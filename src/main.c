#include <stdio.h>
#include <espl_lib.h>

int main(){
	unsigned int user_input = 0;
	int ret = 1;
	char try_again;
	char c;

	
	printf("Hello ESPL!\n");
	
	
	for(;;){
		printf("Please enter an integer:");
		
		for(;;){
			ret = scanf("%u",&user_input);
			if(ret == 0){
				while((c = getchar()) != '\n' && c != EOF); //discard/clear input buffer
				printf("Your input could not be read. Please enter an integer:\n");
			}else{
				break;
			}
		}
		
		printf("%s\n", num_to_words(user_input));
		
		printf("Do you wish to try again? (y/n)\n");
		scanf(" %c", &try_again);
		if(try_again == 'n' || try_again == 'N'){
			break;
		}
	}
	
	return 0;
}
