#include <iostream>
#include <stdio.h>

using namespace std;

class macierz
{
public:
    int **matrix;
    int n; //rows = columns

    //default constructor
    macierz();

    //constructor with an argument
    macierz( int n)
    {
        this->n=n;

        matrix = new int*[n];

        for (int i = 0; i < n; i++)
        {
            matrix[i] = new int [n];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<"Enter ["<<i<<"] ["<<j<<"] element of matrix: ";
                cin>>matrix[i][j];
                cout<<endl;
            }
        }
    }


    //destructor
    ~macierz()
    {
        for (int i=0; i<n; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
        cout<< "Matrix destructor finished" << endl;
    }

    
    void print ()
    {
        int i,j;

        for (i=0; i < n; i++)
        {
            for(j=0; j < n; j++)
            {
                printf("%d    ",(int) matrix[i][j]);
            }
            printf("\n");
        }
    }



};

int main()
{
    macierz m(2);

    m.print();
    return 0;
}
