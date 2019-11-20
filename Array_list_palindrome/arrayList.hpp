//
//  arrayList.hpp
//  cmpe126_lab5
//
//  Created by Brandon Johns on 3/5/19.
//  Copyright © 2019 Brandon Johns. All rights reserved.
//

#ifndef arrayList_hpp
#define arrayList_hpp

#include <stdio.h>

#include <string>

using namespace std;
template <class elemType>
class arrayListType
{
protected:
    elemType *list;
    unsigned int length;
    unsigned int maxSize;
    
public:
    
    /// default constructor
    arrayListType();
    
    
    //// destructor
    ~arrayListType();
    
    
    //// assignment operator
    const arrayListType<elemType>& operator = (const arrayListType<elemType> & equ);
    
    /// checking to see empty
    bool isEmpty() const;
    
    /// checking to see full
    bool isFull() const;
    
    /// returns list size
    int listSize() const;
    
    /// max list size
    int maxListSize() const;
    
    
    
    //// print
    void print();
    
    /// checking to second item matches
    bool isItemAtEqual(int equ, elemType& type) const;
    
    //inserts at second position
    void insertAt(int num, elemType & type);
    
    /// inserts at the end
    void insertEnd(elemType& type);
    
    /// removing object at position
    void removeAt(int num);
    
    /// retrieves an item
    elemType retreiveAt(int num) const;
    
    elemType getMin(elemType &) ;
    
    //replaces at
    void replaceAt(int num, elemType& type) const;
    
    /// empties list
    void clearList();
    
};

template <class elemType>
arrayListType<elemType>:: arrayListType()
{
    maxSize=100;
    list= new elemType[maxSize];
    length=0;
    
}

/// constructor



//// destructor
template <class elemType>
arrayListType<elemType>:: ~arrayListType()
{
    /// deletes the array of the list
    delete [] list;
}


//// assignment operator
template <class elemType>
const  arrayListType<elemType>& arrayListType<elemType>::  operator = (const arrayListType<elemType> & equ)
{
    if(this!= & equ)
    {
        delete [] list;
        maxSize= equ.maxSize;
        length=equ.length;
        
        list= new elemType[maxSize];
        list!=0;
        
        for(int i=0; i< length; i++)
        {
            list[i]=equ.list[i];
        }
        
    }
    return *this;
}

/// checking to see empty
template <class elemType>
bool arrayListType<elemType>:: isEmpty() const
{
    return(length==0);
}

/// checking to see full
template <class elemType>
bool arrayListType<elemType>:: isFull() const
{
    return(length==maxSize);
}

/// returns list size
template <class elemType>
int arrayListType<elemType>:: listSize() const
{
    return length;
}

/// max list size
template <class elemType>
int arrayListType<elemType>:: maxListSize() const
{
    
    return maxSize;
    
    
    
}



//// print
template <class elemType>
void arrayListType<elemType>::  print()
{
    for(int i=0; i<length; i++)
    {
        cout<< list[i] << " " <<endl;
    }
}

/// checking to second item matches
template <class elemType>
bool arrayListType<elemType>:: isItemAtEqual(int equ, elemType & type) const
{
    return (list[equ]==type);
}

///// fix location whete insert goes
//inserts at second position
template <class elemType>
void arrayListType<elemType>:: insertAt(int num, elemType & type)
{
    if(num<0 || num>=maxSize)
    {
        cout<<"the insert item location is not possible " <<endl;
    }
    else
    {
        if(length == maxSize)
        {
            cout<<"list is full"<<endl;
            
        }
        else
        {
            int new_max=maxSize+1;
            
            elemType * list2 = new elemType[new_max];
            
            for(int i =0; i < maxSize; i++)
            {
                list2[i]= list[i];
            }
            
            delete [] list;
            
            list = list2;
            
            list[length]=type;
            length=length+1;
            
            maxSize=new_max;
        }
        
    }
    
}

/// inserts at the end
template <class elemType>
void arrayListType<elemType>:: insertEnd(elemType& type)
{
    if(length >=maxSize)
    {
        cout<<"list is full"<<endl;
    }
    else
    {
        int new_max=maxSize*maxSize;
        
        elemType * list2 = new elemType[new_max];
        
        for(int i =0; i < maxSize; i++)
        {
            list2[i]= list[i];
        }
        
        delete [] list;
        
        list = list2;
        
        list[length]=type;
        length++;
        
        maxSize=new_max;
        
    }
}

/// removing object at position
template <class elemType>
void  arrayListType<elemType>:: removeAt(int num)
{
    if(num>=0 && num<= length)
    {
        for(int i=num;i<length-1; i++)
        {
            list[i]=list[i+1];
        }
        length--;
        
    }
    else
    {
        cout<<"the item cannot be removed"<<endl;
    }
}

/// retrieves an item
template <class elemType>
elemType arrayListType<elemType>:: retreiveAt(int num) const
{
    return(list[num]);
}

//replaces at
template <class elemType>
void arrayListType<elemType>:: replaceAt(int num ,elemType& type) const
{
    if(num<0||num>= length)
    {
        cout<<"that item cannot be replaced "<<endl;
    }
    else
    {
        list[num]=type;
    }
}

/// empties list
template <class elemType>
void  arrayListType<elemType>:: clearList()
{
    length=0;
}


template <class elemType>
elemType arrayListType<elemType>:: getMin( elemType&)
{
    

    
    if(length==1)
    {
        return list[0];
        
    }
    length--;
    
    if(list[0]>list[length])
    {
        list[0]=list[length];
        
    }
    
    return(list,length);
    
}








#endif /* arrayList_hpp */

