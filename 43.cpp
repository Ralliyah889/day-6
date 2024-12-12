#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    
    const char* cStyleString = "welcome to c++ program";

    size_t length = strlen(cStyleString);

    std::cout << "The total length of the string is: " << length << std::endl;


    return 0;
}




