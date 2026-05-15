#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    bool flag = true;
    cin >> a;
    int b = a;
    int max = INT_MIN, min = INT_MAX;
    vector<int> v;
    while(b != 0)
    {
        int c = b % 10;
        if(c > max)
        {
            max = c;
        }

        if(c < min)
        {
            min = c;
        }

        v.push_back(c);

        b /= 10;
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != v[v.size() - 1 - i])
        {
            flag = false;
        }
        
    }
    cout << "***Izlaz 1.1***" << endl;
    cout << "max je: " << max << " " << "min je: " << min << endl;
    if(flag)
    {
        cout << "Broj JESTE palindrom" << endl;
    }
    else
    {
        cout << "Broj NIJE palindrom" << endl;
    }





    vector<int> vc;
    vector<int> finalni_Broj;
    int ccc = a;
    while(ccc != 0)
    {
        int cifra = ccc % 10; // 1 2 3 4 5 6
        vc.push_back(cifra); // 6 5 4 3 2 1
        ccc /= 10;
    }
    reverse(vc.begin(), vc.end()); // 1 2 3 4 5 6
    int c = vc[0] * 100000 + vc[2] * 10000 + vc[4] * 1000 + vc[1] * 100 + vc[3] * 10 + vc[5];

    int prostih = 0;

for(int i = 2; i <= c; i++)
{
    bool prost = true;

    for(int j = 2; j * j <= i; j++)
    {
        if(i % j == 0)
        {
            prost = false;
        }
    }

    if(prost)
    {
        prostih++;
    }
}

    

    cout << "***Izlaz 1.2***" << endl;

    cout << "Broj sa obrnutim ciframa je: " << c << endl;
    cout << "Prostih brojeva ima " << prostih<< endl;


    cout << "***Izlaz 1.3***" << endl;

    int d[7], suma_Parnih = 0, suma_Neparnih = 0;
    int cc = c;
    while(cc != 0)
    {
        if(cc % 2 == 0)
        {
            int cifra = cc % 10;
            suma_Parnih+= cifra;
            
        }
        else 
        {
            int cifra = cc % 10;
            suma_Neparnih+= cifra;
            
        }
        cc /= 10;
    }
    d[0] = suma_Parnih;
    d[7] = suma_Neparnih;
    for(int i = 1; i <= 6; i++)
    {
        d[i] = vc[i];
    }
    for(int i = 0; i < 7; i++)
    {
        cout << d[i] << " ";
    }
    cout << "\n";




    


}