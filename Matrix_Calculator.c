#include<stdio.h>
int add();
int sub();
int prod();
int transpose();
int trace();
int squared();
int cubed();
int line();
int heading();

int main()
{
    printf("\t\t\t");
    heading(17);
    printf("\t\t\tMATRIX CALCULATOR\n");
    printf("\t\t\t");
    heading(17);
    while(1){
    // Name of the Operation
    int choice;
    printf("Please Enter the serial number of the operation. The operations are: \n");
    printf("1. Addition of two matrices\n");
    printf("2. Subtraction of two matrices\n");
    printf("3. Product of two matrices\n");
    printf("4. Transpose of a matrix\n");
    printf("5. Trace of a matrix\n");
    printf("6. Square of a matrix\n");
    printf("7. Cube of a matrix\n");
    printf("8.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    //Different types of Operations using switch
    switch (choice)
    {
    case 1:
        printf("\t\t\t");
        heading(20);
        printf("\t\t\t");
        printf("Addition of Matrices\n");
        printf("\t\t\t");
        heading(20);
        add();
        printf("\n");
        break;
    case 2:
        printf("\t\t\t");
        heading(23);
        printf("\t\t\t");
        printf("Subtraction of Matrices\n");
        printf("\t\t\t");
        heading(23);
        sub();
        printf("\n");
        break;
    case 3:
        printf("\t\t\t");
        heading(26);
        printf("\t\t\t");
        printf("Multiplication of Matrices\n");
        printf("\t\t\t");
        heading(26);
        prod();
        printf("\n");
        break;
    case 4:
        printf("\t\t\t");
        heading(21);
        printf("\t\t\t");
        printf("Transpose of a Matrix\n");
        printf("\t\t\t");
        heading(21);
        transpose();
        printf("\n");
        break;
    case 5:
        printf("\t\t\t");
        heading(17);
        printf("\t\t\t");
        printf("Trace of a Matrix\n");
        printf("\t\t\t");
        heading(17);
        trace();
        printf("\n");
        break;
    case 6:
        printf("\t\t\t");
        heading(18);
        printf("\t\t\t");
        printf("Square of a Matrix\n");
        printf("\t\t\t");
        heading(18);
        squared();
        printf("\n");
        break;
    case 7:
        printf("\t\t\t");
        heading(16);
        printf("\t\t\t");
        printf("Cube of a Matrix\n");
        printf("\t\t\t");
        heading(16);
        cubed();
        printf("\n");
        break;
    case 8:
        printf("Thanks for using the Matrix Calculator.");
        return 0;
    default:
        printf("Invalid Operator. Try again");
        break;
    }
    line();
    printf("Next Operation\n");
}
}

int heading(int n)
{
    for(int i=0; i<n; i++){
        printf("=");
    }
    printf("\n");
}
int line()
{
    int length = 75;
    for (int i = 0; i < length; i++) {
        printf("-"); 
    }
    printf("\n");
}
// Addition
int add()
{
    int r1, c1, r2, c2;
    printf("Enter no of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter no of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter no of columns of 2nd matrix: ");
    scanf("%d", &c2);
    if (r1 != r2 || c1 != c2){
        printf("Matrix cannot be added as the no of rows and columns of 1st matrix and 2nd matrix are not equal. Try Again.\n");
        return 0;
    }
    int a[r1][c1], b[r2][c2];
    printf("Enter Elements of 1st matrix: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Elements of 2nd matrix: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nSum of two matrices is: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

// Subtraction
int sub()
{
    int r1, c1, r2, c2;
    printf("Enter no of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter no of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter no of columns of 2nd matrix: ");
    scanf("%d", &c2);
    if (r1 != r2 || c1 != c2){
        printf("Matrix cannot be subracted as the no of rows and columns of 1st matrix and 2nd matrix are not equal. Try Again.\n");
        return 0;
    }
    int a[r1][c1], b[r2][c2];
    printf("Enter Elements of 1st matrix: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Elements of 2nd matrix: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nDifference of two matrices is: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d\t", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
}

// Product
int prod()
{
    int r1, c1, r2, c2;
    printf("Enter no of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter no of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter no of columns of 2nd matrix: ");
    scanf("%d", &c2);
    if (c1 != r2){
        printf("Matrix cannot be multiplied as the no of columns of 1st matrix and rows of 2nd matrix are not equal. Try Again.\n");
        return 0;
    }
    int a[r1][c1], b[r2][c2];
    printf("Enter Elements of First Matrix.\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Elements of Second Matrix.\n");
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    int prod[r1][c2];
    printf("\nProduct of Two matrices is: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            prod[i][j] = 0;
            for(int k = 0; k < r2; k++){
                prod[i][j] = prod[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
}

// Transpose
int transpose()
{
    int r, c;
    printf("Enter no of rows: ");
    scanf("%d", &r);
    printf("Enter no of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter elements of Matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTranspose of the Matrix is: \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}

// Trace of a matrix
int trace()
{
    int rows,cols;
    printf("Enter no of rows of matrix: ");
    scanf("%d", &rows);
    printf("Enter no of columns of matrix: ");
    scanf("%d", &cols);
    if(rows!=cols){
        printf("The no of rows and columns must be equal. Try again.");
        return 0;
    }
    int marks[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &marks[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i==j){
                sum = sum + marks[i][j];
            }
        }
    }
    printf("Trace of the matrix is: %d", sum);
}

// Square of a matrix
int squared()
{
    int r1, c1;
    printf("Enter no of rows of matrix: ");
    scanf("%d", &r1);
    printf("Enter no of columns of matrix: ");
    scanf("%d", &c1);
    if (r1 != c1){
        printf("The no of rows and columns should be equal. Try Again\n");
        return 0;
    }
    int a[r1][c1], square[r1][c1];
    printf("Enter Elements of Matrix.\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe Square of the matrix is: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            square[i][j] = 0;
            for(int k = 0; k < r1; k++){
                square[i][j] = square[i][j] + a[i][k]*a[k][j];
            }
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d\t", square[i][j]);
        }
        printf("\n");
    }

}

// Cube of a Matrix
int cubed()
{
    int r1, c1;
    printf("Enter no of rows of matrix: ");
    scanf("%d", &r1);
    printf("Enter no of columns of matrix: ");
    scanf("%d", &c1);
    if (r1 != c1){
        printf("The no of rows and columns should be equal. Try again\n");
        return 0;
    }
    int a[r1][c1], square[r1][c1], cube[r1][c1];
    printf("Enter Elements of Matrix.\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            square[i][j] = 0;
            for(int k = 0; k < r1; k++){
                square[i][j] = square[i][j] + a[i][k]*a[k][j];
            }
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cube[i][j] = 0;
            for(int k = 0; k < r1; k++){
                cube[i][j] = cube[i][j] + a[i][k]*square[k][j];
            }
        }
    }
    printf("\nThe Cube of the matrix is: \n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d\t", cube[i][j]);
        }
        printf("\n");
    }

}

// End of Program