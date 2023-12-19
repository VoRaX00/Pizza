#include "Menu.h"

using namespace std;

int main(){
    shared_ptr<Menu>menu = make_shared<Menu>();
    //Menu* menu = new Menu();
    menu->output();
}