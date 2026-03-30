#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	cout << "   ******************** Currency Converter ******************  " << endl;
	cout << "                       Note:								     " << endl;
	cout << "                       Enter U/u for USD					     " << endl;
	cout << "                       Enter P/p for PKR					     " << endl;
	cout << "                       Enter I/i for INR					     " << endl;
	cout << "                       Enter G/g for GBP					     " << endl;
	cout << "   **********************************************************  "  << endl;

    // Rate of january 2025

    // USD
    const double usdToPakRate  = 278.81;
    const double usdToIndRate  = 86.14;
    const double usdToPoundRate= 0.82;
    
    // PAK
    const double pakToUsdRate  = 0.0035;
    const double pakToIndRate  = 0.30;
    const double pakToPoundRate= 0.0029;
    
    // IND
    const double indToUsdRate  = 0.011;
    const double indToPakRate  = 3.23;
    const double indToPoundRate= 0.0095;

    // Pound
    const double poundToUsdRate = 1.21;
    const double poundToIndRate = 105.04;
    const double poundToPakRate = 340.01;

    char convertAgain;
    
    do {
        again:

        char fromCurrency, toCurrency;
        double amount;

        cout << "\n\nSelect your currency : ";
        cin >> fromCurrency;

        cout << "Enter the amount : ";
        cin >> amount;
        
        cout << "Select the currency to convert to  : ";
        cin >> toCurrency;

        double convertedAmount;

        // USD to Other
        if (fromCurrency == 'U' || fromCurrency == 'u') {
            if (toCurrency == 'P' || toCurrency == 'p') {
                convertedAmount = amount * usdToPakRate;
            } 
            else if (toCurrency == 'I' || toCurrency == 'i') {
                convertedAmount = amount * usdToIndRate;
            }
            else if (toCurrency == 'G' || toCurrency == 'g') {
                convertedAmount = amount * usdToPoundRate;  
            }
            else {
                cout<<"\nPlease Enter U, P, G or I\n\n";
                goto again;
            }           
        } 
        
        // PAK to Other
        else if (fromCurrency == 'P' || fromCurrency == 'p') {
            if (toCurrency == 'U' || toCurrency == 'u') {
                convertedAmount = amount * pakToUsdRate;
            } 
            else if (toCurrency == 'I' || toCurrency == 'i') {
                convertedAmount = amount * pakToIndRate;
            }
            else if (toCurrency == 'G' || toCurrency == 'g') {
                convertedAmount = amount * pakToPoundRate;  
            }
            else {
                cout<<"\nPlease Enter U, P, G or I\n\n";
                goto again;
            }
        } 
        
        // IND to Other
        else if (fromCurrency == 'I' || fromCurrency == 'i') {
            if (toCurrency == 'U' || toCurrency == 'u') {
                convertedAmount = amount * indToUsdRate;
            } 
            else if (toCurrency == 'P' || toCurrency == 'p') {
                convertedAmount = amount * indToPakRate;
            }
            else if (toCurrency == 'G' || toCurrency == 'g') {
                convertedAmount = amount * indToPoundRate;  
            }
            else {
                cout<<"\nPlease Enter U, P, G or I\n\n";
                goto again;
            } 
        } 
        
        // Pound to Other
        else if (fromCurrency == 'G' || fromCurrency == 'g') {
            if (toCurrency == 'P' || toCurrency == 'p') {
                convertedAmount = amount * poundToPakRate;
            } 
            else if (toCurrency == 'I' || toCurrency == 'i') {
                convertedAmount = amount * poundToIndRate;
            }
            else if (toCurrency == 'U' || toCurrency == 'u') {
                convertedAmount = amount * poundToUsdRate;  
            }
            else {
                cout<<"\nPlease Enter U, P, G or I\n\n";
                goto again;
            } 
        } 
        
        else {
            cout<<"\nPlease Enter U, P, G or I\n\n";
            goto again;
        }
        
		 cout << fixed << setprecision(2);
         cout << "\nEquivalent amount : ";

                switch (toCurrency) {
                    case 'U':
                    case 'u':
                        cout << "$" << convertedAmount << endl;
                        break;
                    case 'P':
                    case 'p':
                        cout << convertedAmount << " /-PKR "  << endl;
                        break;    
                    case 'G':
                    case 'g':
                        cout << "GBP " << convertedAmount << endl;
                        break;
                    case 'I':
                    case 'i':
                        cout << convertedAmount << " /-INR "  << endl;
                        break;
                    default:
                        cout << convertedAmount << " " << toCurrency << endl;
        }

        cout << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << "\nDo you want to convert again? (y or n) : ";
        cin >> convertAgain;
        
        cout << endl;
        cout << "-------------------------------------------------------------" << endl;

    } while (convertAgain == 'y' || convertAgain == 'Y');

    cout << "Thanks for using the currency converter. Goodbye!\n";

    return 0;
}

