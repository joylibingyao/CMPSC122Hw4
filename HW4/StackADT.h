//
//  StackADT.hpp
//  HW4
//
//  Created by Bingyao Li on 12/6/15.
//  Copyright © 2015 CMPSC122. All rights reserved.
//
#include <iostream>
#include <vector>

#pragma once

using namespace std;


namespace Interfaces {
    template <class T>
    class Stack {
    public:
        virtual void push(const T&) = 0;
        virtual T pop() = 0;
        virtual unsigned int size() const = 0;
        virtual const T& peek() const = 0;
        //		virtual static Stack* createStack(...) = 0; //an example of a factory method to force children classes to be able to construct a stack from particular initial conditions
    };
}

namespace Li {
    template <class T>
    class Bingyao : public Interfaces::Stack<T>{
    protected:
        vector <T> hobby;
    public:
        Bingyao(){
            hobby = *new vector<T>;
            cout<<"Hello Bingyao"<<endl<<endl;
        }
        
        void push(const T& value){
            hobby.push_back(value);
        }
        
        T pop (){
            T t = hobby[hobby.size()-1];
            hobby.pop_back();
            
            return t;
            
        }
        unsigned int size() const
        {
            return hobby.size();
        }
        
        const T& peek() const
        {
            return hobby[hobby.size()-1];
        }
        
        void display(){
            for (int i = 0; i<hobby.size(); i++) {
                cout<<hobby[i]<<" ";
            }
            cout<<endl;
        }
        
        
        
    };
}