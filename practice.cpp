
// // to include where to run
// #include <stdio.h>

// // initialize the function main with the para of void
// int main(void) {
//     printf("Hello, World!\n");
// }


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}