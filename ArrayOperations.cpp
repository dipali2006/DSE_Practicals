#include <iostream>
using namespace std;

int main() {
    int arr[100], arr2[100], merge[200];
    int n = 0, m = 0, choice, i, pos, value, key;

    do {
        cout << "\n---- Array Operations ----\n";
        cout << "1. Create Array\n";
        cout << "2. Traverse Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Search Element\n";
        cout << "6. Update Element\n";
        cout << "7. Sort Array\n";
        cout << "8. Merge Arrays\n";
        cout << "9. Split Array\n";
        cout << "10. Destroy Array\n";
        cout << "11. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter size of array: ";
            cin >> n;
            cout << "Enter elements:\n";
            for(i=0;i<n;i++)
                cin >> arr[i];
            break;

        case 2:
            cout << "Array elements: ";
            for(i=0;i<n;i++)
                cout << arr[i] << " ";
            break;

        case 3:
            cout << "Enter position and value: ";
            cin >> pos >> value;
            for(i=n;i>=pos;i--)
                arr[i] = arr[i-1];
            arr[pos-1] = value;
            n++;
            break;

        case 4:
            cout << "Enter position to delete: ";
            cin >> pos;
            for(i=pos-1;i<n-1;i++)
                arr[i] = arr[i+1];
            n--;
            break;

        case 5:
            cout << "Enter element to search: ";
            cin >> key;
            for(i=0;i<n;i++) {
                if(arr[i]==key) {
                    cout << "Element found at position " << i+1;
                    break;
                }
            }
            if(i==n)
                cout << "Element not found";
            break;

        case 6:
            cout << "Enter position and new value: ";
            cin >> pos >> value;
            arr[pos-1] = value;
            break;

        case 7:
            for(i=0;i<n-1;i++)
                for(int j=0;j<n-i-1;j++)
                    if(arr[j] > arr[j+1])
                        swap(arr[j],arr[j+1]);
            cout << "Array sorted\n";
            break;

        case 8:
            cout << "Enter size of second array: ";
            cin >> m;
            cout << "Enter elements:\n";
            for(i=0;i<m;i++)
                cin >> arr2[i];

            for(i=0;i<n;i++)
                merge[i] = arr[i];
            for(i=0;i<m;i++)
                merge[n+i] = arr2[i];

            cout << "Merged array: ";
            for(i=0;i<n+m;i++)
                cout << merge[i] << " ";
            break;

        case 9:
            cout << "First half: ";
            for(i=0;i<n/2;i++)
                cout << arr[i] << " ";

            cout << "\nSecond half: ";
            for(i=n/2;i<n;i++)
                cout << arr[i] << " ";
            break;

        case 10:
            n = 0;
            cout << "Array destroyed\n";
            break;

        case 11:
            cout << "Exit";
            break;

        default:
            cout << "Invalid choice";
        }

    } while(choice != 11);

    return 0;
}
