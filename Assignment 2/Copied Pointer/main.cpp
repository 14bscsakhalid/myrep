/* 
 * File:   main.cpp
 *
 * Created on February 16, 2016, 9:51 PM
 */

#include <cstdlib>
#include <iostream>
#include<cstring>
#include "StringBuffer.h"
#include "String.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
		cout << "*****************COPIED POINTERS***************";
	
	 StringBuffer* str = new StringBuffer();
	 str->append('A');
	 str->append('P');
	 cout << "CharAt(0): " << str->charAt(0);
	 cout << "\nLength: " << str->length() << "\n";
	 delete str;
    
	system("pause");
	return 0;

}

