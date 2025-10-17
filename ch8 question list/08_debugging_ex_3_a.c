/*
Assume that the arrays A and B are declared as follows:
        int A[5][4];
        float B[4];
Find the errors (if any) in the following program segments.
(a) for (i=1; i<4; i++)
    scanf("%f",B[i]);
*/

/*
Errors: 1.When we are reading the elements of the array using the indices, we need to mention the 
        address of operator (i.e. "&").

        2.The array index should always start with '0'.
       
        Therefore, the corrected syntax is: for (i=0; i<4; i++)
                                            scanf("%f", &B[i]);
*/