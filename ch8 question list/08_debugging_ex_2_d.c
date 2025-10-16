/*
Identify errors, if any, in each of the following initialization statements.
(d) int m[2,4] = {(0,0,0,0)(1,1,1,1)};
*/

/*
Errors: 1.In multi-dimensional arrays, the number of rows columns must be written separately in 
          different box brackets.
        2.The parenthesis with "0,0,0,0" and "1,1,1,1" is not correct and hence is giving an error.
        
        Hence, the corrected syntax is: int m[2][4] = {0,0,0,0,1,1,1,1};
        Also, for more readability, this code is also correct: int m[2][4] = {{0,0,0,0},{1,1,1,1}};
*/
