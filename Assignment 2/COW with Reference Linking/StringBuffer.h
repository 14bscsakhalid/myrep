#ifndef STRINGBUFFER_H
#define	STRINGBUFFER_H

class rLink
{
public:
	 rLink* next;

	int _obj;
};

class StringBuffer{
public :
    StringBuffer();
    ~StringBuffer();
    StringBuffer(const StringBuffer&);
    StringBuffer(char*,int);

    char charAt(int) const;
    int length() const;
    void smartCopy(char*,int);
    void smartCopy(StringBuffer*);
    void revSmartCopy(char* newString);
    void reserve(int);
    void append(char);
    int _refcount;
	rLink nexto;

private:
    char* _strbuf;
    int _length;
    
};

#endif	/* STRINGBUFFER_H */

