/*
Assume that the arrays A and B are declared as follows:
        int A[5][4];
        float B[4];
Find the errors (if any) in the following program segments.
(d) for (i=4; i>=0; i--)
    for (j=0; j<4; j++)
    A[i][j] = B[j] + 1.0;
*/

/*
Errors: 1.Since, B[j] is itself uninitialized so, using B[j] in "A[i][j] = B[j] + 1.0" would give undefined behaviour. 
        Therefore, first B[j] should be intialized and then "A[i][j] = B[j] + 1.0" would give correct output.

        2.Since, there is more than one line of code in the second for-loop. Therefore, its block of code should be 
        enclosed within curly braces. We can enclose the block of code for the first for-loop for better readability even 
        though it's not an error.

        Hence, the corrected code is: for (i=4; i>=0; i--)
                                      for (j=0; j<4; j++){
                                      B[j] = constant;
                                      A[i][j] = B[j] + 1.0;
                                      }
                                      

*/
