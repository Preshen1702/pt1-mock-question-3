///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:

	Fraction(int n=0,int d =0,int j = 0){
		num = n;
		denom = d;
	}

	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };

	int getNum(){
		return num;
	}

	int getDen(){
		return denom;
	}

	void setNum(int nu){
		num = nu;
	}

	void setDen(int de){
		denom = de;
	}


	Fraction add(int n,Fraction f){
		Fraction addf;
		addf.setNum(f.getNum() + n*f.getDen());
		addf.setDen(f.getDen());
		return addf;
	}

	Fraction add(Fraction f,int n){
		Fraction addf;
		addf.setNum(f.getNum() + n*f.getDen());
		addf.setDen(f.getDen());
		return addf;
	}

	friend bool & operator>(const Fraction f1,const Fraction f2);
};

bool & operator>(const Fraction f1,const Fraction f2){
	bool r = f1.num / f1.denom > f2.num / f2.denom;
	return r;
}

int main(){
	Fraction f1(2, 3, 0);
	Fraction f2(1, 3, 0);

	if (f1 > f2){
		cout << "Wrong" << endl;
	}
	else{
		cout << ":)" << endl;
	}

	Fraction addF,ans;
	ans = addF.add(f1, 5);
	ans.print();

	return 0;
}