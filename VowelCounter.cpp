#include <string>
int v(std::string s){int i=0;for(int c:s)for(int v:"aeiou")i+=c==v;return i;}
