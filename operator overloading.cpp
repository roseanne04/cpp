#include <iostream>
using namespace std;
class Matrix 
{
    int m[3][3];
    public:
    Matrix() 
    {
        for (int i=0;i<3;i++) 
        {
            for (int j=0;j<3;j++) 
            {
                m[i][j]=0;
            }
        }
    }
    Matrix(int values[3][3]) 
    {
        for (int i=0;i<3;i++) 
        {
            for (int j=0;j<3;j++) 
            {
                m[i][j]=values[i][j];
            }
        }
    }
    Matrix operator+(Matrix &m1)
    {
        Matrix result;
        for (int i=0;i<3;i++) 
        {
            for (int j=0;j<3;j++) 
            {
                result.m[i][j]=m[i][j]+m1.m[i][j];
            }
        }
        return result;
    }
    Matrix operator-()
    {
        Matrix result;
        for (int i=0;i<3;i++) 
        {
            for (int j=0;j<3;j++) 
            {
                result.m[i][j]=-m[i][j];
            }
        }
        return result;
    }
    void display()
    {
        for (int i=0;i<3;i++) 
        {
            for (int j=0;j<3;j++) 
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main() 
{
    int values1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int values2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    Matrix matrix1(values1);
    Matrix matrix2(values2);
    cout<<"Matrix 1:"<<endl;
    matrix1.display();
    cout<<"\nMatrix 2:"<<endl;
    matrix2.display();
    Matrix sumMatrix=matrix1+matrix2;
    cout<<"\nSum of Matrix 1 and Matrix 2:"<<endl;
    sumMatrix.display();
    Matrix negatedMatrix=-matrix1;
    cout<<"\nNegated Matrix 1:"<<endl;
    negatedMatrix.display();
    return 0;
}

/*OUTPUT
Matrix 1:
1 2 3 
4 5 6 
7 8 9 

Matrix 2:
9 8 7 
6 5 4 
3 2 1 

Sum of Matrix 1 and Matrix 2:
10 10 10 
10 10 10 
10 10 10 

Negated Matrix 1:
-1 -2 -3 
-4 -5 -6 
-7 -8 -9 

*/