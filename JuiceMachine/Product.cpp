#include <iostream>
#include <string>
#include "Product.h"

using namespace ProductTypes;

Product::Product(ProductType productType)
{
    m_productType = productType;

    m_qty = 0;
    m_cost = 0.f;
    m_productName = getProductNameFromEnum(productType);
}

Product::Product(ProductType productType, int qty, float cost)
{
    m_productType = productType;
    m_qty = 0;
    m_cost = 0.f;
    m_productName = getProductNameFromEnum(productType);
}

Product::~Product()
{
    std::cout << "Product " << getProductNameFromEnum(this->m_productType) << " Destroyed\n";
    // std::cout << "Product Destoyed\n";
}

std::string Product::getProductNameFromEnum(ProductType productType)
{
    std::string products[] = {"Apple Juice", "Orange Juice","Mango Juice","Strawberry Banana"}; 
    return products[productType];

}

