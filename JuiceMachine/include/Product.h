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

        Product(int);
        Product(int , int , float );
        std::string getProductNameFromEnum(int );
        ~Product();
        
    private:
        // ProductTypes::ProductType m_productType;
        int m_productType;
        int m_qty;
        float m_cost;
        std::string m_productName;

};
