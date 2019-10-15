#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box one);
void setvolume(box * one);

int main()
{
    struct box one =
    {
        "Shanghai",
        2.0,
        3.0,
        4.0,
        0
    };
    display(one);
    setvolume(&one);
}

void display(box one)
{
    cout << "maker: " <<one.maker << " height: " << one.height << " width: " << one.width << "length: " << one.length << " volume: " <<one.volume <<endl;
}

void setvolume(box *one)
{
    one->volume = one->height * one->width * one->length;
    cout << "volume: " << one->volume <<endl;
}
