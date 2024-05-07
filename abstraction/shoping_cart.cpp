#include <iostream>
#include <vector>

using namespace std;

class Product {
private:
    string name;
    float price;

public:
    Product(string n, float p) : name(n), price(p) {}

    float getPrice() const {
        return price;
    }
};

class ShoppingCart {
private:
    vector<Product> items;

public:
    void addProduct(Product prod) {
        items.push_back(prod);
    }

    float calculateTotal() const {
        float total = 0;
        for (const auto& item : items) {
            total += item.getPrice();
        }
        return total;
    }
};

class Customer {
private:
    ShoppingCart cart;

public:
    void addToCart(Product prod) {
        cart.addProduct(prod);
    }

    float checkout() const {
        return cart.calculateTotal();
    }
};

int main() {
    Product p1("Laptop", 1000);
    Product p2("Mouse", 20);
    
    Customer customer;
    customer.addToCart(p1);
    customer.addToCart(p2);
    
    cout << "Total amount to pay: $" << customer.checkout() << endl;
    
    return 0;
}
