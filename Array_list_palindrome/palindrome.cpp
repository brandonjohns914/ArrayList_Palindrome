//
//  palindrome.cpp
//  cmpe126_lab5
//
//  Created by Brandon Johns on 3/5/19.
//  Copyright © 2019 Brandon Johns. All rights reserved.
//

#include <stdio.h>
using namespace std;


bool check_P(int start, int end,const string &s)
{
    
    if(start == end){
        return true;
    }
    if (s[start]!=s[end])
    {
        return false;
    }

    return check_P(start + 1, end - 1,  s);
}
bool check_palindrome(const string &s )
{
    
    if(s.length()<=1)
    {
        return true;
    }
    
unsigned int start= 0;
unsigned int end= s.length()-1;
    
    return check_P(start,end,s);
    


}


