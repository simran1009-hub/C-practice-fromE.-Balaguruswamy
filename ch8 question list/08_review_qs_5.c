/*
Which of the following initialization statements are correct?
(a) char strl[4] = "GOOD";
(b) char str2[ ] = "C";
(c) char str3[5] = "Moon";
(d) char str4[ ] = {'S', 'U', 'N'};
(e) char str5[10] = "Sun";
*/

/*
For part (a), 
    For strings we always have to keep one memory space for null character. Hence, the corrected 
    syntax for (a) is: char str1[5] = "GOOD";
    
For part (b),
    This syntax has no error.

For part (c),
    This syntax has no error.
    
For part (d),
    In this sort of syntax, we have to include the the null character also. Implying, its corrected 
    syntax is "char str4[ ] = {'S', 'U', 'N', '\0'};
    
For part (e),
    This syntax is also error free.

Hence, parts (b) , (c) and (e) are correct syntaxes.
*/