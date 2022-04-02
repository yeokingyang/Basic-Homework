#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm> 
#include <iomanip>
#include <fstream>
using namespace std;



int main() {

    int frame, address, i, j, k, r, q, policy, hit = 0;
    bool exit = false, pass = false;
    ofstream textfile;
    while (exit == false) {

        cout << "Enter number of addresses\n";
        while (true)
        {
            cin >> address;
            if (!cin)
            {
                cout << "Wrong type of input . Enter only int again " << endl;
                cout << "Enter number of addresses\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            else break;
        }

        cout << "Enter number of frames\n";
        while (true)
        {
            cin >> frame;
            if (!cin)
            {
                cout << "Wrong type of input . Enter only int again " << endl;
                cout << "Enter number of frames\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            else break;
        }


        while (true)
        {
            cout << "Enter replacement policy to use\n 1. FIFO\n 2. LRU\n";
            cin >> policy;

            if (!cin) {
                cout << "\nWrong type of input !";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (policy == 1)
                break;
            else if (policy == 2)
                break;
            else {
                cout << "\nWrong Input!";
                continue;
            }

        }

        vector<int> pa(address);
        vector<int> ha(address);



         
        while (pass == false) {
            cout << "Enter addresses\n";
            for (i = 0; i < address; i++) {
               
                while (true)
                {
                    cin >> pa[i];
                    if (!cin)
                    {
                        cout << "Wrong type of input . Enter only int again " << endl;
                        cout << "Enter addresses\n";
                        cin.clear();
                        pa.assign(pa.size(), 0);
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        i = 0;
                        continue;
                    }
                    else
                        break;
                }

                if (pa[i] >= 10) {
                    pa.assign(pa.size(), 0);
                    cout << "Please enter one by one \n";
                    break;
                }
                else if (i == address - 1)
                    pass = true;
            }
        }
  
        vector<vector<int>> p(frame);

      
        for (i = 0; i < frame; i++) {
            p[i] = vector<int>(address, -1);
        }

        map <int, int> mp;

        for (i = 0; i < address; i++) {
          

            vector<pair<int, int>> c;


            for (auto q : mp) {
                c.push_back({ q.second,q.first });
            }

           
            sort(c.begin(), c.end());


            bool hasrun = false;

         
            for (j = 0; j < frame; j++) {

                
                if (p[j][i] == pa[i]) {
                    hit++;

                 
                    ha[i] = 1;
                    if (policy == 1)
                        mp[pa[i]]++; 
                    else
                        mp[pa[i]] = 1;   
                    hasrun = true;
                    break;
                }
              
                if (p[j][i] == -1) {
                    for (k = i; k < address; k++)
                        p[j][k] = pa[i];
                    mp[pa[i]]++;
                    hasrun = true;
                    break;
                }
            }
           
            if (j == frame || hasrun == false) {
                for (j = 0; j < frame; j++) {
                    if (p[j][i] == c[c.size() - 1].second) {
                        mp.erase(p[j][i]);
                        for (k = i; k < address; k++)
                            p[j][k] = pa[i];
                        mp[pa[i]]++;
                        break;
                    }
                }
            }
            for (auto q : mp) {
                if (q.first != pa[i]) {
                    mp[q.first]++; 
                }
            }
        }

        if (policy == 1)
            cout << "\n\n Using Replacement Policy FIFO\n\n";
        else if (policy == 2)
            cout << "\n\n Using Replacement Policy LRU\n\n";

        for (i = 0; i < frame; i++) {
            cout << "  i = " << i << " ";
            for (j = 0; j < address; j++) {
                if (p[i][j] == -1)
                    cout << setw(4) << " ";
                else
                    cout << setw(3) << p[i][j] << " ";
            }
            cout << '\n';
        }
        cout << "   Hit  ";
        for (i = 0; i < address; i++) {
            if (ha[i] == 0)
                cout << setw(4) << " ";
            else
                cout << setw(3) << "*" << " ";
        }
        cout << "\n\n";
        cout << " address";
        for (i = 0; i < address; i++) {
            cout << setw(3) << pa[i] << " ";
        }
        cout << "\n\n";
        double x = hit;
        double y = address;
        double ratio = x / y;
        cout << "Total     = " << address << '\n' << "Hit       = " << hit << '\n'
            << "Hit ratio = " << hit << "/" << address << " = "
            << fixed << setprecision(3) << ratio << '\n';

        while (true) {
            cout << "\n\n Do you want to save output to file?\n 1.yes \n 2.no\n";
            cin >> r;


            if (!cin) {
                cout << "\nWrong type of input !";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (r == 1) {

                textfile.open("output.txt");

                if (policy == 1)
                    textfile << "\n\n Using Replacement Policy FIFO\n\n";
                else
                    textfile << "\n\n Using Replacement Policy LRU\n\n";

                for (i = 0; i < frame; i++) {
                    textfile << "  i =   " << i << " ";
                    for (j = 0; j < address; j++) {
                        if (p[i][j] == -1)
                            textfile << "\t" << " ";
                        else
                            textfile << "\t" << p[i][j];
                    }
                    textfile << '\n';
                }
                textfile << "   Hit      ";
                for (i = 0; i < address; i++) {
                    if (ha[i] == 0)
                        textfile << "\t" << " ";
                    else
                        textfile << "\t" << "*";
                }
                textfile << "\n";
                textfile << " address  ";
                for (i = 0; i < address; i++) {
                    textfile << "\t" << pa[i];
                }
                textfile << "\n\n";

                textfile << "Total\t=" << address << '\n' << "Hit\t=" << hit << '\n' << "Hit ratio\t="
                         << hit << "/" << address << " = " << fixed << setprecision(3) << ratio << '\n';

                textfile.close();

                cout << "\nOutput is saved and overwritted \n";
                break;
            }
            else if (r == 2) {
                cout << "\nOutput is not saved\n";
                break;
            }
            else {
                cout << "\n Wrong Input!";
                continue;
            }
        }

        while (true) {
            cout << "\n Do you want to exit? \n1.yes\n2.no\n";
            cin >> q;

            if (!cin) {
                cout << "\nWrong type of input !";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (q == 1) {
                exit = true;
                break;
            }
            else if (q == 2) {
                exit = false;
                pa.assign(pa.size(), 0);
                ha.assign(ha.size(), 0);
                pass = false;
                hit = 0;
                system("cls");
                break;
            }
            else
            {
                cout << "\nWrong Input!";
                continue;
            }
        }

    }
    return 0;
}
