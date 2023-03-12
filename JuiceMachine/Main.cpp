#include <iostream>
#include <vector>
#include <string>
#include "JuiceMachine.h"

int main()
{
    int itemID;

    JuiceMachine JM = JuiceMachine();
    JM.initJuices();
    std::cout << "Number of elements: " << JM.getProductCount();
    std::cout << "\nEnter Product Number:";
    std::cin >> itemID;
    JM.selectItem(itemID);

    std::cout << "\nProduct Selected: " << JM.m_selectedProduct->m_productName;
    std::cin.get();
    std::cin.get();

    return 0;
}
