#include "Smiley.h"

Smiley::Smiley(Point p, int r):Circle{p,r}, mouth{nullptr}{}
Smiley::~Smiley(){
    delete mouth;
    for(auto p:eyes)
        delete p;
}


void Smiley::add_eye(Shape *s){
    eyes.push_back(s);

}

void Smiley::draw() const{
    Circle::draw();
    for (auto p:eyes)
        p->draw();
    mouth->draw();
}