#include<iostream>
#include<list>

using namespace std;

string getColumn(string value, int newColumn);

int main () {
    int row = 0, column = 0, zRow = 0, zColumn = 0;
    cin>>row>>column>>zRow>>zColumn;
    int newRow = row * zRow;
    int newColumn = column * zColumn;
    string matrix[row];
    list<string> result;

    string value = "";
    for(int i = 0; i < row; i++) {
        cin>>value;
        matrix[i] = value;

        if(column != newColumn) {
            string value = getColumn(matrix[i], zColumn);
            result.push_back(value);
        } else {
            if(row != newRow) {
                for(int j = 0; j < zRow; j++) {
                    result.push_back(matrix[i]);
                }
            }
        }
    }

    for(string i : result){
        cout<<i<<endl;
    }

    return 0; 
}

string getColumn(string value, int newColumn) {
    string result = "";
    
    for(int i = 0; i < value.length(); i++) 
        for(int j = 0; j < newColumn; j++)
            result += value.at(i);

    return result;
}