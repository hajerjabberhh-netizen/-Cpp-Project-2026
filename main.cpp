#include <iostream>
#include <vector>
#include <string>

using namespace std;

// هيكل يمثل المنتج
struct Product {
    string name;
    double price;
};

int main() {
    // قائمة المنتجات المتوفرة
    vector<Product> menu = {
        {"Burger", 5.50},
        {"Pizza", 8.00},
        {"Soda", 1.50}
    };

    double total = 0;
    int choice, quantity;

    cout << "--- Welcome to My Cashier System ---" << endl;
    
    while (true) {
        cout << "\nMenu:\n";
        for (int i = 0; i < menu.size(); i++) {
            cout << i + 1 << ". " << menu[i].name << " ($" << menu[i].price << ")\n";
        }
        cout << "0. Finish & Print Receipt\n";
        
        cout << "Select item: ";
        cin >> choice;
if (choice < 0 || choice > menu.size()) {
    cout << "Invalid choice! Try again.\n";
    continue;
    
        if (choice == 0) break;

        cout << "Quantity: ";
        cin >> quantity;

        total += menu[choice - 1].price * quantity;
        cout << "Added to cart!" << endl;
    }

    cout << "\n----------------------------\n";
    cout << "Total Amount: $" << total << endl;
        
    cout << "Thank you for shopping!\n";

    return 0;
}
