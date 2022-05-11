#include<cassert>
#include<string>
using namespace std::literals;

int main() {
	//prueba de tipo de dato bool
	assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);
    assert(true or true and false);
    //prueba de tipo de dato char
    assert('a'=='a');
    assert('a'!='b');
    assert('a'!='A');
    assert('a'>'A');
    assert(('a'>'b') or ('a'<'c'));
    //prueba de tipo de dato unsigned
    assert(2==1+1);
    assert(4==2*2);
    assert(10>5);
    assert(1<2);
    assert(4!=2);
    //prueba de tipo de dato int
    assert(2==1+1);
    assert(4==3+1);
    assert(10==7+3);
    assert(10>5);
    assert(-1<1);
    assert(1!=2);
    //prueba de tipo de dato double
    assert(2.0==1.0+1.0);
    assert(2.1==1.0+1.1);
    assert(0.1==1.0/10.0);
    assert(2==1+1.0);
    assert(2.0>1.9);
    //prueba de tipo de dato string
    assert("lionel"s=="lio"s+"nel"s);
    assert("lionel"s.length()==6);
    assert(("hola"s.length()==7)==false);
}