#include "stack.h"

int main() {
    Stack S;
    createStack(S);

    cout << "Hello World" << endl;
    pushAscending(S, 3);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 2);
    pushAscending(S, 3);
    pushAscending(S, 9);
    
    printInfo(S); 

    cout << "balik stack" << endl;
    balikStack(S); 
    printInfo(S);  
    
    createStack(S); 
    
    cout << "\nHello World" << endl;
    getInputStream(S); 
    
    printInfo(S); 
    
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}