#pragma 
#include<vector>
#include "Product.h"

class JuiceMachine
{
    public:
        JuiceMachine();
        ~JuiceMachine();
        void initJuices();
        int getProductCount();
        void selectItem(int itemIndex);
        Product*                m_selectedProduct;

    private:
        std::vector<Product*>    m_products;
};
