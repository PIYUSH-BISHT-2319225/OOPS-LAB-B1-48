#include <iostream>
#include <string>
using namespace std;

class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    Invoice(string pNumber, string pDescription, int qty, double price)
    {
        partNumber = pNumber;
        partDescription = pDescription;
        setQuantity(qty);
        setPricePerItem(price);
    }

    void setPartNumber(string pNumber)
    {
        partNumber = pNumber;
    }
    string getPartNumber()
    {
        return partNumber;
    }

    void setPartDescription(string pDescription)
    {
        partDescription = pDescription;
    }
    string getPartDescription()
    {
        return partDescription;
    }

    void setQuantity(int qty)
    {
        if (qty > 0)
        {
            quantity = qty;
        }
        else
        {
            quantity = 0;
        }
    }
    int getQuantity()
    {
        return quantity;
    }

    void setPricePerItem(double price)
    {
        if (price > 0.0)
        {
            price_per_item = price;
        }
        else
        {
            price_per_item = 0.0;
        }
    }
    double getPricePerItem()
    {
        return price_per_item;
    }

    double getInvoiceAmount()
    {
        return quantity * price_per_item;
    }
};

int main()
{
    Invoice invoice("12345", "Hamme", 5, 12.99);

    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: " << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: " << invoice.getInvoiceAmount() << endl;

    
  

    return 0;
}
