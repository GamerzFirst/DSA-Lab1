#include <iostream>
using namespace std;

int main() 
{
    int m, n;

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int A[100][100];

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        
        case 1: 
        {
            cout << "Enter the elements of the matrix:" << endl;
            
            for (int i = 0; i < m; ++i) 
            {
                for (int j = 0; j < n; ++j) 
                {
                    cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                    cin >> A[i][j];
                }
            }
            break;
        }
        
        case 2: 
        {
            cout << "Matrix elements:" << endl;
            
            for (int i = 0; i < m; ++i) 
            {
                for (int j = 0; j < n; ++j) 
                {
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        
        case 3: 
        {
            int sum = 0;
            
            for (int i = 0; i < m; ++i) 
            {
                for (int j = 0; j < n; ++j) 
                {
                    sum += A[i][j];
                }
            }
            cout << "Sum of all elements: " << sum << endl;
            break;
        }
        
        case 4: 
        {
            cout << "Row-wise sum:" << endl;
            
            for (int i = 0; i < m; ++i) 
            {
                int sum = 0;
                
                for (int j = 0; j < n; ++j) 
                {
                    sum += A[i][j];
                }
                cout << "Row " << i + 1 << ": " << sum << endl;
            }
            break;
        }
        
        case 5: 
        {
            cout << "Column-wise sum:" << endl;
            
            for (int j = 0; j < n; ++j) 
            {
                int sum = 0;
                
                for (int i = 0; i < m; ++i) 
                {
                    sum += A[i][j];
                }
                cout << "Column " << j + 1 << ": " << sum << endl;
            }
            break;
        }
        
        case 6: 
        {
            int B[100][100];

            // Transpose
            for (int i = 0; i < n; ++i) 
            {
                for (int j = 0; j < m; ++j) 
                {
                    B[i][j] = A[j][i];
                }
            }

            // Display the transpose
            cout << "Transpose of the matrix:" << endl;
            for (int i = 0; i < n; ++i) 
            {
                for (int j = 0; j < m; ++j) 
                {
                    cout << B[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
        
        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;
        
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
