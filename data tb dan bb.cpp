/* NAMA : CELY FEBITA ILHAM
NPM : 2117051022
"PROGRAM MENGHITUNG BMI SESEORANG BERDASAR TINGGINYA"  */

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
//======== I N P U T =========

	cout<<"input"<<endl;
	
	double bb;
	double tb;
	cin >> bb;
	cin >>tb;
	cout<<endl;
	
//======== O U T P U T ========

//TB yang telah dikuadratkan = 2,4336
//RUMUS BMI = BB/TB = 58/2,4336 = 23,8330
	
	cout<<"output"<<endl;
	
	cout<< bb/ (tb*tb) <<endl;
	
}


