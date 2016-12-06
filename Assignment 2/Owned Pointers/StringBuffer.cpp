#include "StringBuffer.h"
#include <memory>
#include <iostream>

using namespace std;
//default constructor

StringBuffer::StringBuffer() {
    this->_strbuf = 0;
    this->_length = 0;
	this->ownership = true;
}
//destructor

StringBuffer::~StringBuffer() {
	 if(this->ownership == true){
		  _strbuf = 0;
		  delete[] _strbuf;
	 }
	 else {
		  _strbuf = 0;
	 }

}

//copy a const StringBuffer into this string

StringBuffer::StringBuffer(StringBuffer& newString) {
    this->_strbuf = new char[newString.length()];

	for(int i = 0; i < newString.length(); i++){
		 _strbuf[i] = newString.charAt(i);
	}
	newString.ownership = false;
	this->ownership = true;

}

//copy a char* into your string

StringBuffer::StringBuffer(char* newString, int length) {
//    _length = length;
//    delete[] _strbuf;
    _strbuf = new char[length];
    _strbuf = newString;
	this->ownership = true;

	/*for(int i = 0; i < length; i++){

	}*/

    //Should I delete the string passed by the user?
    //delete[] newString;

}



void StringBuffer::reserve(int n) {

	 delete[] _strbuf;
	 _strbuf = new char[n];
	 this->ownership = true;
    //if (_length < n) {
    //    //int newlength = n; //max(_length*2,n);
    //    char* newbuf = new char[n];
    //    
    //    //return stuff from the new buffer to the stored buffer
    //    delete[] _strbuf;
    //    this->_strbuf = newbuf;
    //    this->_length = n;
    //}
}

//append a character at the end of this String, which has already made a reservation
//Main Assumption: the length has been allocated but not yet utilized and the 
//length counter has not been increased.

void StringBuffer::append(char c) {
    //this->_strbuf[this->_length - 1] = c;
	char* temp = _strbuf;
	_length++;

	_strbuf = new char[_length];
	_length--;
	for(int i = 0; i < _length; i++){
		 _strbuf[i] = temp[i];
	}

	_strbuf[_length] = c;
	_length++;
	delete temp;

}
//get length of the string

int StringBuffer::length() const {
    return this->_length;
}

//get character at index if it is less than length

char StringBuffer::charAt(int index) const {
    if (index < _length) {
        return _strbuf[index];
    } else {
        //throw new IndexOutOfBoundException();

    }
}
