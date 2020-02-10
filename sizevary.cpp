#include <stdio.h>

#include <string.h>

int main(void)

{

char line[100] = "hello\n";

 

printf( "The size of the array is : %zu and the length of the stored string : %s is : %zu ",

       sizeof( line ), line, strlen( line ) );

 

return 0;

}
