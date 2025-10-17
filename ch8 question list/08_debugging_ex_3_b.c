/*
Assume that the arrays A and B are declared as follows:
        int A[5][4];
        float B[4];
Find the errors (if any) in the following program segments.
(b) for (i=1; i<=5; i++)
    for (j=1; j<=4; j++)
    A[i][j] = 0;
*/

/*
Errors: 1. The index of any array should start from 0 and go up till ((size of the array) - 1)
            
        Therefore, the corrected code is: for (i=0; i<5; i++)
                                          for (j=0; j<4; j++)
                                          A[i][j] = 0;
*/