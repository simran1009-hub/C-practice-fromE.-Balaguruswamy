/*
Assume that the arrays A and B are declared as follows:
        int A[5][4];
        float B[4];
Find the errors (if any) in the following program segments.
(c) for (i=0; i<=4; i++)
    B[i] = B[i]+i;
*/

/*
Errors: 1.The size of array B is 4 and it implies it has requested memory space for four 
        floating-point numbers (from index = 0 to index = 3). But, in the given code the value of i is running from 0 to 4, 
        which counts to 5 elements, which is incorrect.
        
        2.Since, the elements of the array isn't initialized, the initialization syntax will give undefined
        behaviour. In order to still use this initialization, we should first initialize the elements of the 
        array.
        
        Hence, the corrected syntax is: for (i=0; i<4; i++){
                                        B[i] = constant;
                                        B[i] = B[i]+i;
                                        }
*/