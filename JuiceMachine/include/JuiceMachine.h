#pragma 
#include<vector>
#include "Product.h"

class JuiceMachine
{
    public:
        JuiceMachine();
        void initJuices();
        int getProductCount();

    private:
        Product*                m_selectedProduct;
        std::vector<Product>    m_products;
};
