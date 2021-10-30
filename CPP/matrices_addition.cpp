#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct matrics
{
int a[4][4], m, n;
};

matrics add_mat(matrics m1, matrics m2);		//prototype declared

int main()
{
matrics x1, x2, x3;
int i, j;
cout<<"
Enter the size of matrics
";
cout<<"
Enter rows 
";
cin>>x1.m;
cout<<"
Enter columns 
";
cin>>x1.n;
cout<<"
Enter the elements (Row-wise & Column-wise)
	for(i=0; i<x1.m; i++)
	{
		for(j=0; j<x1.n; j++)
		cin>>x1.a[i][j];
	}
cout<<"
Enter the size of 2nd matrics
";
cout<<"
Enter rows
";
cin>>x2.m;
cout<<"
Enter columns
";
cin>>x2.n;
cout<<"
Enter the elements (Row-wise & column-wise)
	for(i=0; i<x2.m; i++)
	{
		for(j=0; j<x2.n; j++)
		cin>>x2.a[i][j];
	}
x3=add_mat(x1,x2);
cout<<"
The added matrics is
";
	for(i=0; i<x3.m; i++)
	{
		for(j=0; j<x3.n; j++)
		cout<<x3.a[i][j]<<" ";
	}

matrics add_mat(matrics m1, matrics m2)
{
matrics m3;		//object of matrics type
int k, l;
if((m1.m==m2.m) && (m1.n==m2.n))
	{  m3.m=m1.m+m2.m;
	   m3.n=m1.n+m2.n;
	}

	for(k=0; k<m1.m; k++)
	{
		for(l=0; l<m1.n; l++)
		m3.a[k][l]=m1.a[k][l]+m2.a[k][l];
	return (m3);
	}
}//		end of If loop

else
cout<<"
Addition is not possible
";
}