/* Use proper naming for variables and find area of the room */


#include <iostream>
using namespace std;

int main()
{
    int room_width {0};
    int room_length {0};

    cout << "Enter Room_Width: ";
    cin >> room_width;

    cout << "Enter Room_lenght: ";
    cin >> room_length;

    cout << "Area of the room is " << room_length * room_width << endl;

    return 0;
}
