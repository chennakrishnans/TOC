#include <stdio.h>
int main() 
{
    int current_state = 0;
    char input;
    int transitions[2][2] = {{1, 0}, {1, 1}};
    printf("Enter a string: ");
    while ((input = getchar()) != '\n') 
	{
        if (input == 'a') 
		{
            current_state = transitions[current_state][0];
        } else {
            current_state = transitions[current_state][1];
        }
    }
    if (current_state == 1) 
	{
        printf("Accepted\n");
    } else {
        printf("Not Acpterd\n");
    }
    return 0;
}