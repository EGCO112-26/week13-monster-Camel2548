//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;
    monster x[5]={{"Kyogre",10},{"Groudon",5,20},{"Rayquaza",5,10}};
    monster m1("Calyrex",500,3);
    monster m2("Yvetal"),m4("Dialga",30);
    //monster m3;
    p=new monster("Xerneas",4,9);
    delete p; //destructor
    return 0;//destructor x,m4,m2,m1
}
