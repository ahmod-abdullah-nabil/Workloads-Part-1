// This is the interface for the class Sale.
#ifndef SALE_H
#define SALE_H

namespace SavitchSale
{
    class Sale
    {
    public:
        Sale();
        Sale(double thePrice);
        double bill() const;
        double getPrice() const;
        void setPrice(double newPrice);
        double savings(const Sale &other) const;

    private:
        double price;
    };
}

#endif // SALE_H
