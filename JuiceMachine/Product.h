#pragma 
#include<string>

namespace ProductTypes{

        enum ProductType
        {
            APPLE,
            ORANGE,
            MANGO,
            STRAWBERRY,
        };
}

class Product
{

    public:

        Product(ProductTypes::ProductType);
        Product(ProductTypes::ProductType , int , float );
        std::string getProductNameFromEnum(ProductTypes::ProductType );
        ~Product();
        std::string m_productName;
    private:
        ProductTypes::ProductType m_productType;
        // int m_productType;
        int m_qty;
        float m_cost;

};
