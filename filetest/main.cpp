//Group #21
//Gal Egozi - 50%
//Hieu Pham - 50%

//prestart
#include <iostream>
#include <fstream>
using namespace std;
int length(const char *a);
//code begins here.
int main() {
    //declare file
    ifstream input;
    input.open("/Users/galegozi/Desktop/filetest/filetest/input.txt", ios::in);
    //declare word array
    char * words[9];
    for (int x = 0; x < 9; x++) {
        words[x] = new char;
    }
    //prepare length arrays
    int len[9];
    int l3 = 0;
    int l4 = 0;
    int l5 = 0;
    //fill words array and length array
    char *temp = new char;
    for(int x = 0; x < 9; x++){
        input >> temp;
        len[x] = length(temp);
        for (int a = 0; a < length(temp); a++) {
            words[x][a] = temp[a];
        }
    }
    //fill l3, l4, and l5
    for (int l : len) {
        switch (l) {
            case 3:
                l3++;
                break;
            case 4:
                l4++;
                break;
            case 5:
                l5++;
                break;
        }
    }
    //initialize t arrays
    char *t3[l3];
    char *t4[l4];
    char *t5[l5];
    l3 = 0;
    l4 = 0;
    l5 = 0;
    for (int c = 0; c < l3; c++) {
        t3[c] = new char;
    }
    for (int c = 0; c < l4; c++) {
        t4[c] = new char;
    }
    for (int c = 0; c < l5; c++) {
        t5[c] = new char;
    }
    //fill t arrays
    for (int c  = 0; c < 9; c++) {
        switch (len[c]) {
            case 3:{
                t3[l3] = words[c];
                l3++;
            }
                break;
            case 4 : {
                t4[l4] = words[c];
                l4++;
            }
                break;
            case 5 : {
                t5[l5] = words[c];
                l5++;
            }
        }
    }
    //output
    for (int a = 0; a < 9; a++) {
        cout << words[a] << endl;
        for (int b = 0; b < len[a]; b++) {
            cout <<words[a][b] << endl;
        }
        cout << "\n";
    }
    return 0;
}
int length(const char *a) {
    const char *b = a;
    int count = 0;
    while (*b != '\0') {
        count++;
        b++;
    }
    return count;
}