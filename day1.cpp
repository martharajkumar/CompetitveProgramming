/*PRINT DIAGONALS */
#include<iostream>
# define MAX 100
using namespace std;
void diagonalsquare(int mat[3][3],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		cout<<mat[i][i]*mat[i][i]<<" ";
 	}
	for(int i=0;i<r;i++)
	{
		cout<<mat[i][r-i-1]*mat[i][r-i-1]<<" ";
	}

}
int main()
{
	int mat[3][3]={{1,2,3},
			{4,5,6},
			{7,8,9}};
	diagonalsquare(mat,3,3);
	return 0;
	
}

