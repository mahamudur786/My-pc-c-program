#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the summingSeries function below.
 */
int  summingSeries(long n) {
    
     long art;
     long c = pow(10,9) +7;
     art = (n*n) % c;
     return art;

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long  result = summingSeries(n);

        cout << result << "\n";
    }

    //cout.close();

    return 0;
}

