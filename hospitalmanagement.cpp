#include <iostream>
using namespace std;


int normalDoctor()
{
    int man1;
    cout << "how can i help you"<<endl;
    cin>>man1;
    cout << "take pcm "<<endl;
    return 1;
}
void xrayDoctor()
{
    int man4;
    cout << "how can i help you"<<endl;
    cin>>man4;
    cout<<"go for xray"<<endl;
    cout<<"x ray fee is 200"<<endl;
}
void cardiodoctor()
{
    int man4;
    cout << "how can i help you"<<endl;
    cin>>man4;
    cout<<"go for ECG"<<endl;
    cout<<"x ray fee is 200"<<endl;
}
void radiologist()
{
    int man4;
    cout << "how can i help you"<<endl;
    cin>>man4;
    cout<<"go to room no 9 for test"<<endl;
    cout<<" fee is $200"<<endl;
}

void hospital()
{
    cout << "how can i help you"<<endl;
    cout << "normal doctor=1" << endl;
    cout << "cardio doctor=2" << endl;
    cout << "radiologist=3" << endl;
    cout << "xray=4" << endl;
    cout << "tell your request or issue (1-4): ";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        normalDoctor();
        cout << "yes he is available"<<endl;
        cout<<"consultation fee is 300"<<endl;
        cout<<"go to that room"<<endl;
        break;
    }
    case 2:
    {
        cardiodoctor();
        cout <<"yes he is avaliable"<<endl;
        cout<<"consultation fee is 1000"<<endl;
        cout<<"go to that room6"<<endl;
        
        break;
    }
    case 3:
    {
        radiologist();
        cout << "yes radiologist"<<endl;
        cout<<"consultation fee is 500"<<endl;
        cout<<"go to that room"<<endl;
        break;
    }
    case 4:
    {
        xrayDoctor();
        cout << "yes xray"<<endl;
        cout<<"consultation fee is 500"<<endl;
        cout<<"go to that room"<<endl;
        xrayDoctor();
        break;
    }
    default:
    {
        cout << "invalid"<<endl;
        break;
    }
    }
}

int main()
{
    hospital();
   
    return 0;
}