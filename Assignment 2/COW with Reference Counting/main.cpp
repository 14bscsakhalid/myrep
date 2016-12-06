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
    
	 cout<<"******************COW with Reference counting*******************";

    char* text = "anas";
    
    
    
    String ss2(text,4);
    std::cout<<"ss2 length = "<<ss2.length()<<std::endl;
    cout<<text<<endl;
    //multiple references
    String ss(ss2);
    cout<<text<<endl;
    //output statements
    std::cout<<"ss length = "<<ss.length()<<std::endl;
    std::cout<<"new ss charAt 0 = "<<ss.charAt(0)<<std::endl;
    
    //append a character
    ss2.append('w');
    
    //cout<<hello<<endl;
    //hello = "bye";
    
    std::cout<<"new ss length = "<<ss.length()<<std::endl;
    std::cout<<"new ss2 length = "<<ss2.length()<<std::endl;
    
	system("pause");
    return 0;
}
