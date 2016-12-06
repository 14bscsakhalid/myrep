#ifndef STRINGBUFFER_H
#define	STRINGBUFFER_H

class StringBuffer{
public :
    StringBuffer();
    ~StringBuffer();
    StringBuffer(StringBuffer&);
    StringBuffer(char*,int);

    char charAt(int) const;
    int length() const;
    void reserve(int);
    void append(char);
	

private:
    char* _strbuf;
    int _length;
	bool ownership;
    
};

#endif	/* STRINGBUFFER_H */

