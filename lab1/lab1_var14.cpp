#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

const int MAX_VIRUS = 10;

struct Virus 
{
    string virusName;
    int virusCode;
    int numOfMutations;
    string vaccine;
};

Virus viruses[MAX_VIRUS];
int numViruses = 0;

void AddVirus() 
{
    if (numViruses < MAX_VIRUS)
    {
        cout << "Enter virus name: ";
        cin.ignore();
        getline(cin, viruses[numViruses].virusName);

        cout << "Enter virus code: ";
        cin >> viruses[numViruses].virusCode;

        cout << "Enter number of mutations: ";
        cin >> viruses[numViruses].numOfMutations;

        cout << "Enter vaccine name: ";
        cin.ignore();
        getline(cin, viruses[numViruses].vaccine);

        numViruses++;
        cout << "Virus added successfully." << endl;
    }
    else
        cout << "The maximum number of viruses has been reached." << endl;
}

void DeleteVirus(int virusCode)
{
    for (int i = 0; i < numViruses; i++)
    { 
        if (viruses[i].virusCode == virusCode)
        {
            for (int j = i; j < numViruses - 1; j++)
            {
                viruses[j] = viruses[j + 1];
            }
            numViruses--;
            cout << "Virus with code " << virusCode << " deleted successfully." << endl;
            return;
        }
    }
    cout << "Virus with code " << virusCode << " not found." << endl;
}

void ModifyVirus(int virusCode)
{
    for (int i = 0; i < numViruses; i++)
    {
        if (viruses[i].virusCode == virusCode)
        {
            cout << "Enter a new virus name: ";
            cin.ignore ();                      
            getline(cin, viruses[i].virusName);

            cout << "Enter new number of mutations: ";
            cin >> viruses[i].numOfMutations;

            cout << "Enter new vaccine name: ";
            cin.ignore();
            getline(cin, viruses[i].vaccine);

            cout << "Virus information modified successfully." << endl;
            return;
        }
    }
    cout << "Virus with code " << virusCode << " not found." << endl;
}

void ShowVirus()
{
    for (int i = 0; i < numViruses; i++)
    {
        cout << endl;
        cout << "Virus name: " << viruses[i].virusName << endl;
        cout << "Virus code: " << viruses[i].virusCode << endl;
        cout << "Number of mutations: " << viruses[i].numOfMutations << endl;
        cout << "Vaccine: " << viruses[i].vaccine << endl;
    }
}

void SaveToFile()
{
    ofstream file("viruses.txt");
    for (int i = 0; i < numViruses; i++)
    {
        file << viruses[i].virusName << endl
             << viruses[i].virusCode << endl
             << viruses[i].numOfMutations << endl
             << viruses[i].vaccine << endl;
    }
    file.close();
    cout << "Data saved to file successfully." << endl;
}

void LoadFromFile()
{
    ifstream file("viruses.txt");
    Virus virus;
    numViruses = 0; 

    while (file >> ws && getline(file, virus.virusName) && numViruses < MAX_VIRUS) 
    {
        file >> virus.virusCode;
        file >> virus.numOfMutations;
        file >> ws; 
        getline(file, virus.vaccine);

        viruses[numViruses++] = virus;
    }
    file.close();
    cout << "Data loaded from file successfully." << endl;
}

void showMenu()
{
    cout << endl << "Menu:" << endl;
    cout << "1. Show virus" << endl;
    cout << "2. Add virus" << endl;
    cout << "3. Delete virus by code" << endl;
    cout << "4. Modify virus information by code" << endl;
    cout << "5. Save to file" << endl;
    cout << "6. Load from file" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
}

void runMenu()
{
    int choice;
    int virusCode;

    do 
    {
        showMenu();
        cin >> choice;

        switch (choice) 
        {
            case 1:
                ShowVirus();
                break;
            case 2:
                AddVirus();
                break;
            case 3:
                cout << "Enter virus code to delete: ";
                cin >> virusCode;
                DeleteVirus(virusCode);
                break;
            case 4:
                cout << "Enter virus code to modify: ";
                cin >> virusCode;
                ModifyVirus(virusCode);
                break;
            case 5:
                SaveToFile();
                break;
            case 6:
                LoadFromFile();
                break;
            case 7:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } 
    while (choice != 7);
}

int main() 
{
    runMenu();
    return 0;
}
