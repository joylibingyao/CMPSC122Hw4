//
//  main.cpp
//  HW4
//
//  Created by Bingyao Li on 12/6/15.
//  Copyright © 2015 CMPSC122. All rights reserved.
//

#include <iostream>
#include "StackADT.h"

using namespace Li;



int main(int argc, const char * argv[]) {
    
    Bingyao<int> bingyao;
    
    bingyao.push(1);
    bingyao.push(-2);
    bingyao.push(99);
    cout<<"show elemnts in the vector: ";
    bingyao.display();
    bingyao.push(66);
    cout<<"pushed one more: ";
    bingyao.display();
    bingyao.pop();
    cout<<"poped the last one: ";
    bingyao.display();
    cout<<endl;
    cout<<"size of the vecotr: "<<bingyao.size()<<endl;
    
    cout<<"last elemnt of the vector is: "<<bingyao.peek()<<endl;
    
    
    return 0;
}
