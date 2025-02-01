#include <iostream>
#include <string>
using namespace std;

class Dino {
    public:

    string roar, name;
    int eaten_dinos;
};

int main(){
    Dino dino1, dino2, dino3;

    cin >> dino1.name >> dino1.roar >> dino1.eaten_dinos;
    cin >> dino2.name >> dino2.roar >> dino2.eaten_dinos;
    cin >> dino3.name >> dino3.roar >> dino3.eaten_dinos;

    int maxd = max(dino1.eaten_dinos, dino2.eaten_dinos);
    maxd = max(maxd, dino3.eaten_dinos);

    if (maxd == dino1.eaten_dinos) cout << dino1.name << " is not hungry, he ate " << dino1.eaten_dinos << " other dinos and said " << dino1.roar << "!";
    else if (maxd == dino2.eaten_dinos) cout << dino2.name << " is not hungry, he ate " << dino2.eaten_dinos << " other dinos and said " << dino2.roar << "!";
    else cout << dino3.name << " is not hungry, he ate " << dino3.eaten_dinos << " other dinos and said " << dino3.roar << "!";
    

    return 0;
}