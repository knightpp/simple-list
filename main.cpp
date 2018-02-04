#include <iostream>
#include <cstring>
#include "List.h"

void print(Item item) {
    std::cout << item.str << " ";
}

int main() {

    Item myItem{};
    strcpy(myItem.str, "Text");
    //myItem.str = "Text";

    List myList;
    for (int i = 0; i < 10; i++) {
        myList.AddItem(myItem);
    }
    myList.Traverse(print);
   // std::cout << "\n" << myList[5].str;

    for(List::Iterator it(myList); it(); it++){
        print(*it.item);
    }
    return 0;
}
