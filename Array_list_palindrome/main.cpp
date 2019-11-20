//
//  main.cpp
//  cmpe126_lab5
//
//  Created by Brandon Johns on 3/5/19.
//  Copyright © 2019 Brandon Johns. All rights reserved.
//

#include <iostream>
#include "palindrome.cpp"
#include "arrayList.hpp"
#include <string>



using namespace std;



int main()
{
   
    
    string palin1="hello";
    string palin2="racecar";
    cout<<"first word: "<< palin1 <<endl;
    cout<<check_palindrome(palin1)<<endl;
    cout<<"second word: "<< palin2 <<endl;
    cout<< check_palindrome(palin2)<<endl;
    
    
    arrayListType<int> my_int;
   
    
    cout<<"enter 3 numbers: "<<endl;
   
    int num=3;
     int usernum[num];
    for (int i=0; i < num; i++)
    {
        cout<<" : ";
        cin>> usernum[i];
        
        my_int.insertAt(i, usernum[i]);
        
        cout<<"smallest number entered : " << my_int.getMin(usernum[i]) <<endl;
        
    }
    
    
    
    
    
    

   
    
    
   
    

   
    
    
    
    
    

   
    
   
    
    
    
}
