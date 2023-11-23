       #include<iostream>     
       using namespace std;

      int main() {
       char choice;
       do 
       {
        double price, totalCost, taxRate;
        int quantity;

        // Input for product details
        cout << "Enter the price of the product: ";
        while (!(cin >> price) || price < 0)
        {
            cout << "Please enter a valid price: ";
        }
       
        
        

        cout << "Enter the quantity: ";
        while (!(cin >> quantity) || quantity < 0)
        {
            cout << "Please enter a valid quantity: ";
        }
           
        
        

        cout << "Enter the sales tax rate (in percentage): ";
        while (!(cin >> taxRate) || taxRate < 0)
        {
            cout << "Please enter a valid tax rate: ";
        }
           
        
        

        // Calculating total cost
        totalCost = price * quantity;
        if (quantity >= 10) 
        {
            totalCost -= totalCost * 0.1; // Applying 10% discount
        }
        totalCost += totalCost * (taxRate / 100); // Adding tax

        // Displaying total cost
        cout << "Total cost including tax and discount: $" << totalCost << endl;

        // Check if user wants to continue
        cout << "Do you want to calculate for another product? (y/n): ";
        cin >> choice;
         } while (choice == 'y' || choice == 'Y');

        return 0;
        }