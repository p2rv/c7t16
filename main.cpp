#include <iostream>

using namespace std;
string to_string(const int value,const int base);
string invert(const string);
void print(int value, int base=10);
int main() {
    int base,value;
    cin>>value>>base;
    print(value,base);
    return 0;
}

void print(int value, int base){

    if(base==10)
        cout<<value;
    else
    {
        int div,mod;
        string result="";
        div=value;
        while (div>=base)
        {
            mod=div%base;
            div/=base;

            result+= to_string(mod,base);
        }
        result+= to_string(div,base);
        cout << invert(result);
    }

}
string invert(const string value){
    string result="";
    for(int i=value.length();i>=0;--i)
     result +=value[i];
    return result;
}
string to_string(const int value,const int base) {
    string result="";
    if (base > 10 && value >= 10)
        result=(char)('A' + value - 10);
    else
        result= to_string(value);
    return result;
}