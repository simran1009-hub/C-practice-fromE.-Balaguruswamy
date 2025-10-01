/*
What is the output of the following programs?
main( )
{
            int m ;
            for (m = 1; m<5; m++)
                printf(%d\n", (m%2) ? m : m*2);
}
*/
#include<stdio.h>

int main( )
{

        int m ;
        for (m = 1; m<5; m++)
            printf("%d\n", (m%2) ? m : m*2);          /*Firstly, one double quote was missing before "%d" in the printf string.Output of this program is:1
                                                                                                                                                         4
                                                                                                                                                         3
                                                                                                                                                         8
                                                                                                                                                         */
    return 0;
}