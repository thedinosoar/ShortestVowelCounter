#include <string>
int v(std::string s){int i=0;for(char c:s)for(char v:"aeiou")i+=c==v;return i;}
