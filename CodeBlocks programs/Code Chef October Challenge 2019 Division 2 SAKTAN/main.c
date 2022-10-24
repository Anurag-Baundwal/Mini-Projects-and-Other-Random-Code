#include <stdio.h>

int main(void) {
    // your code goes here

    int numCases;
    scanf("%d", &numCases);

    // Loop for each individual test case ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int countCase;
    int a, b;
    for(countCase = 1; countCase <= numCases; countCase++)
    {
        int numOddEntries = 0;

        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);
        // N = no. of rows
        // M = no. of columns
        // Q = no. of operations

        // Creating the matrix using 2-D Arrays  --------------------------------------------------------------
	    int arr[N][M];
        int i, j;
        int count_Q, countRow, countCol;
        // i = row no.
        // j = column no.

        for(i = 1; i <= N; i++)
            for(j = 0; j < M; j++)
                arr[i][j] = 0;

        for(count_Q = 0; count_Q < Q; count_Q++)
	    {
	        int x, y;
	        scanf("%d %d", &x, &y);

	        // increment every element in row x
	        for(countCol = 0; countCol < M; countCol++)
	            arr[x][countCol]++;

	        // increment every element in column y
	        for(countRow = 1; countRow <= N; countRow++)
	            arr[countRow][y]++;
	    }

	    // ------------------------------------------------------------------------------------------------
	    // now count the number of 1s
	    int checkRow, checkCol;
	    for (checkRow = 1; checkRow <= N; checkRow++)
	    {
	        for (checkCol = 0; checkCol < M; checkCol++)
	            {
	                if((arr[checkRow][checkCol] % 2) == 1) // check whether or not the entry is odd
	                {
	                    numOddEntries++;
	                }
	            }
	    }
	    // printing the matrix
	    for(a = 0; a < N; ++a)
            {
                for(b = 0; b < M ; ++b)
                    {
                        printf("%d\t", arr[a][b]);
                    }
                printf("\n");
            }
	    printf("%d\n", numOddEntries);
    }
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}

/*
// FAILED ATTEMPT
#include <stdio.h>

int main(void) {
	// your code goes here
	int T, N, M, Q, x, y, count_1s;
	// T = no. of testcases
	// N = no. of rows in the matrix (ie, no. of arrays)
	// M = no. of columns in the matrix (ie, no. of elements in each array)
	// Q = no. of operations performed on the matrix
	// x = row in which we have to add 1 to each element
	// y = column in which we have to add 1 to each element
	scanf("%d", &T);
	for(int i=1; i<=T; i++) {
	    scanf("%d %d %d", &N, &M, &Q);

    	// Creating the matrix ----------------------------------------------------------------------
	    for(int count_Q = 1; count_Q <= Q; count_Q++)
	    {
	        scanf("%d %d", &x, &y);

	       ) // making the rows
    	    for(int count_rows = 1; count_rows <= N; count_rows++)
    	    {
    	        int arr[M];
    	        arr[y-1]++; // adds 1 to each element in column no. y
    	                    // ^counting starts from 0
                count_1s++;
    	        for(int count_col = 1; count_col <= M; count_col++)
    	        {
    	            arr[count_col] = 0; //

    	            if(count_rows == x)
    	                arr[count_col]++;

    	           count_1s++;
    	        }
    	    }
    	    // Now, how do we add 1 to each element in row no. x?
    	    // We did it in line no. 42 :)
	    }
	// ----------------------------------------------------------------------

	    printf("%d", count_1s);
	}
	return 0;
}

// 1st run -> minor syntax mistake
// 2nd run -> successfully executed but time limit exceeded
*/
