#include <iostream>
using namespace std;

//to declare a pointer:
//dataType *pointerName;


int main()
{
	//declare variables
	int iNum = 23;

	//declare a pointer of type integer
	int *p;

	//pointer variables do not store values
	//they store memory addresses
	p = &iNum; //read as "Store the address of inum in p."
			  //& is claled the address of operator


	//at this point in time p is not storing the value in iNum(23)
	//it is storeing the hex address of where that 23 is stored in memory

	//* is claled the DERFRENCING OPERATOR or INDIRECTION OPERATOR

	//now let's take a look inside each variable
	//and see what is stored there

	cout << "iNum = " << iNum << endl; //what is stored in iNum?
	cout << "&iNum = " << &iNum << endl; //address of iNum
	cout << "p = " << p << endl; //what is stored in p? //the address of where p is being stored
	cout << "*p = " << *p << endl; // what is stored in *p? 


	//we can also use the * to store values in storage
	//location that the pointer is pointing to 
	//do this: store 16 in iNum using the pointer
	*p = 16; 

	//now let's see what's happening with out variables
	cout << "iNum = " << iNum << endl; //what is stored in iNum?
	cout << "&iNum = " << &iNum << endl; //address of iNum
	cout << "p = " << p << endl; //what is stored in p? //the address of where p is being stored
	cout << "*p = " << *p << endl; // what is stored in *p? 

	//this is ILLEGAL!
	//p = 100; can't store a value into a pointer variable
	//         unless it's a memory address or NULL

	//create another int variable and int pointer
	int iVal = 15; //normal variable
	int *q;  //int pointer named q
	q = &iVal;  //store the address into the pointer q

	//let's get cray - cray
	p = q;

	cout << "p = " << p << endl; //what is stored in p?
	cout << "*p = " << *p << endl; // what is stored in *p? 

		return 0;
}