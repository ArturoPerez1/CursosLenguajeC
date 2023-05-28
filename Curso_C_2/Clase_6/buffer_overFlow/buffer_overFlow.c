#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
	char buffer[20];
	char * buffer2 = "va a ser sobre escrita";
    
    printf("original buffer2: %s\n", buffer2);
    strcpy(buffer, argv[1]);
    printf("new buffer2= %s\n", buffer2);

    return 0;

}