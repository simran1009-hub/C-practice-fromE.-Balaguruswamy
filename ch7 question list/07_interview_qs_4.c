/*
4. What will be the value of x and y after following statemetns are executed?
    int x = 10,y = 20;
    x = x++ + ++y;
    y = ++x + y++;
   Explain the logic while calculating the answer.
*/
/*Answer : The value of x is 32 and that of y is 53 because :- 
                Step1: First post-increment operator is used, so x = 10 is used in the expression but after using 
                the value, x is promoted to x = 11. And for y, pre-increment operator is used so y = 21. Hence, x is 
                assigned 31, overwriting the x = 11 assignment.

                Step2: Now, in second expression, pre-incfrement operator is used for x, so x = 32 now. And for y,
                post-increment operator is used, so y = 21 is used in the expression and then y = 22. But, since 
                x = 32 and y = 21, so, y = 53. And y = 53 overwrites y = 22. 
                
                Hence, x = 32 & y = 53.
*/