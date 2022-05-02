#include "common.h"

struct sA {
    int aaa;
    int bbb;
};

int fun() {
    return 0;
}

int xxx() {
    return 0;
}

int int::fun(int self)
{
    return 0;
}

int int::xxx(int self)
{
    return 0;
}

int main() {
   auto li = new list<int>.initialize();
   
   li.push_back(1);
   li.push_back(2);
   li.push_back(3);

   foreach(it, li) {
       printf("%d\n", it);
   }
   

   return 0;
}
