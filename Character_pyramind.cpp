#include <iostream>
using namespace std;
int main(){
    int enter_the_row{},row{},space{},output{};

    cout << "Enter the any number to see Charcter pyramind " << endl;
    cin >> enter_the_row;

    for(row=0; row <= enter_the_row; row++){
        for(space=enter_the_row-1; space >= row; space--){
            cout << " ";
        }
        char alpha='A';
        for(output=1; output<=row; output++){
            cout << alpha++;
        }
        int output_2{};
        for(output_2 = output; output_2 >= output - row; output_2--){
            cout << alpha--;
        }
        cout << endl;
    }
    return 0;
}