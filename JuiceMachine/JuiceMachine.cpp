#include "JuiceMachine.h"
#include <algorithm>
#include <memory>

using namespace ProductTypes;
JuiceMachine::JuiceMachine()
{

}

void JuiceMachine::initJuices()
{
    Product* OJ = new Product(ProductType::ORANGE, 5, 2.5f);
    Product* MJ = new Product(ProductType::MANGO, 5, 3.5f);
    Product* AJ = new Product(ProductType::APPLE, 5, 1.5f);
    Product* SJ = new Product(ProductType::STRAWBERRY, 5, 4.5f);

    m_products.push_back(OJ);
    m_products.push_back(AJ);
    m_products.push_back(MJ);
    m_products.push_back(SJ);

}

int JuiceMachine::getProductCount()
{
    return m_products.size();
}

JuiceMachine::~JuiceMachine()
{
    for(Product* product : m_products)
    {
        delete product;
    }
}

void JuiceMachine::selectItem(int itemIndex)
{
    m_selectedProduct = m_products[itemIndex];
}
