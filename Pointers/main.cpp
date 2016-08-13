//
//  main.cpp
//  Pointers
//
//  Created by Eduar Apaza Yáñez on 8/12/16.
//  Copyright © 2016 Eduar Apaza Yáñez. All rights reserved.
//
//  Using subindexes and pointers with arrays
//

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    
    int b[] = {10, 20, 30, 40};
    
    int *pointer = b;
    
    //showing the elements from b array using the subindex
    
    for(int i=0; i<4; i++){
        cout<<b[i]<<" - ";
    }
    cout<<endl;
    
    //showing the elements from b array using *pointer like subindex
    
    for(int j=0; j<4; j++){
        cout<<pointer[j]<<" - ";
    }
    
    cout<<endl;
    
    //showing the elements from b array using *pointer and the notation pointer
    
    for(int k=0; k<4; k++){
        cout<<*(pointer+k)<<" - ";
    }
    
    cout<<endl;
    
    cout<<" ------ ";
    
    //Copying characters from a string with arrays and pointers
    
    
    
}
