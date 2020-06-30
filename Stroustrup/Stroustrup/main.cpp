//
//  main.cpp
//  Stroustrup
//
//  Created by egle nausedaite on 30/06/2020.
//  Copyright © 2020 egle nausedaite. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //if there is a match in vectInTest from dislikes, print out 'bleep' instead:
    vector<string> dislikes = {"dislike0", "dislike1", "dislike2", "dislike3"};
    vector<string> vectInTest = {"madonna", "dislike0", "dislike3", "dislike0", "britney"};
    
    int i = 0;
    while ( i < vectInTest.size() )
    {
        int j = 0;
        while ( j < dislikes.size() )
        {
             if ( dislikes[j] == vectInTest[i])
             {
                 vectInTest[i] = "bleep ";
             }
            j++;
        }
        cout << vectInTest[i] << " ";
        i++;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    std::cout << "\n\n\n\nHello, World!\n";
    return 0;
}
