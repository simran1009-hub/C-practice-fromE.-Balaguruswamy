/*
What is the error in the following program?
        main ( )
        {
                    int x ;
                    float y [ ] ;
                    ......
        }
*/

/*
Errors: 1. The main function's syntax is "int main ( ){ //any valid C code}". Hence, it's corrected 
        code is: int main ( ){// any valid C code}
        2. If the array is only declared and not initialized in the same line of code, then the size of the array must
            be mentioned.
        
        Hence, the corrected code is: int main ( )
                                      {
                                                    int x ;
                                                    float y [constant] ;
                                                    ........
                                      return 0;
                                      }
*/