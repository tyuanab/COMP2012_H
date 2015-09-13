/*
 * eraw3.cpp
 *
 *  Created on: 2015年9月10日
 *      Author: user
 */

#include<iostream>
using namespace std;

/*
int main ()
{
	enum computer {
		aw, msi, qqq, kuxuandedamao, nimama,
	};
	computer wanted_one;
	int mask = 0;
	int i;
	for (i = 0; i<=7; i++);
		mask = mask | ( 1<< i);
	cout << mask << endl;

	return 0;
}
*/
/*
int main()
{
	int a=-1, b=1, c=1;
	if(a>0)
		if(b>0)
				c = 2;
	else
	c = 3;
	cout << c << endl;
}
*/
/*
int main()
{
	// factorial
	int n;
	while(n != -1){
	cout << "enter a numer to !(factorial)(-1 to quit)";
	cin >> n ;


	for (int i=n-1;i>=1;i--)
		n =n * i;
	if(n==-1){
		break;
	}
	else{
		cout << n << endl;;
	}

	}

	return 0;
}
*/
//diamond
/*
int main ()
{
	int star, space, row=5;
	for (row = 1;row <=5;row++){


	for(space=1;space<=5-row;space++)

		cout << " ";
		for (star = 1; star <= 2*row - 1 ; star++)
			cout<< "*";
		cout<<endl;
	}
for(row = 4;row>=1;row--)
	{for(space = 1; space <= 5- row ; space ++ )
		cout<< " ";
	for(star = 1; star <= 2 *row -1 ; star ++ )
		cout << "*" ;
	cout << endl;
	}

}
*/
//multiplication table
/*
int main ()
{	int col, row;
	const int colmax = 9, rowmax = 9;
	for(row = 1;row<=rowmax; row++ )
	{
		for(col = 1; col<=colmax;col++)
			cout<< row * col << "\t" ;
		cout << endl;
	}

}
*/
//Linear search for array
int main ()
{
	int A[] = {10, 7, 9, 1, 17, 30, 5, 6};
	int x, n, index;
	index = -1;
	cout << "Search for? ";
			cin >> x ;
	for (n=0; n<=7;n++)
		if (x == A[n])
			index = n;
	cout << x << " found at " <<  index ;
if(index == -1)
	cout << "Not found " << endl;





}
