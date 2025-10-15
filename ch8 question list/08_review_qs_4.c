/*
We want to declare a two-dimensional integer type array called matrix for 3 rows and 5 columns.
Which of the following declarations are correct?
(a) int matrix [3],[5];
(b) int matrix [5] [3];
(c) int matrix [1+2] [2+3];
(d) int matrix [3,5];
(e) int matrix [3] [5];
*/
/*
Answer: The correct syntax for declaring a two-dimensional integer type array with 3 rows and 
        5 columns and with "matrix" as its name, is : int matrix[3][5];
        This correctly matches with the syntax given in part(e).
        
        For part (a),
        The error is the comma between the sizes of the matrix.

        For part (b),
        In syntax, the number of rows are written first and then the number of columns.

        For part (c),
        As the values inside the box brackets are constants, the syntax is correct.


        For part (d),
        For two-dimensional array syntax, the dimensions must be written in different box brackets.

        For part (e),
        This syntax is has no errors.

        Hence, only (c) and (e) part are correct.
*/