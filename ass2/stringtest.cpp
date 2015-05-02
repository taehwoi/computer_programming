#include <iostream>
#include "String.h"
using std::cout;
using std::endl;
using std::boolalpha;


int main() {
  String s1( "happy" );
  String s2( "happy" ); 
  String s3;
  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;
  std::cout << s3 << std::endl;
  std::cout << "hello" << std::endl;
  // test overloaded equality and relational operators
  cout << boolalpha << "\n\nThe results of comparing s2 and s1:" << "\ns2 == s1 yields " <<
    ( s2 == s1 )
    << "\ns2 != s1 yields " << ( s2 != s1 )
    << "\ns2 > s1 yields " << ( s2 > s1 )
    << "\ns2 < s1 yields " << ( s2 < s1 )
    << "\ns2 >= s1 yields " << ( s2 >= s1 )
    << "\ns2 <= s1 yields " << ( s2 <= s1 )<<endl;
  std::cout << s1(0,2) << std::endl;
  std::cout << s2(4,0) << std::endl;
  s1 += "you";
  std::cout << s1 << std::endl;

  // test overloaded String empty (!) operator
  cout << "\n\nTesting !s3:" << endl;
  if ( !s3 ) {
    cout << "s3 is empty; assigning s1 to s3;" << endl; s3 = s1; 
    // test overloaded assignment
    cout << "s3 is \"" << s3 << "\""; } 
  return 0;
} // end main
