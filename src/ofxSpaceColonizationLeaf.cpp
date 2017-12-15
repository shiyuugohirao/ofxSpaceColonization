#include "ofxSpaceColonizationLeaf.h"

ofxSpaceColonizationLeaf::ofxSpaceColonizationLeaf(glm::vec3 _pos){
    pos = _pos;
}

// add
ofxSpaceColonizationLeaf::ofxSpaceColonizationLeaf(glm::vec3 _pos, unsigned _leafID){
    pos = _pos;
    leafID = _leafID;
}

glm::vec3 ofxSpaceColonizationLeaf::getPosition() const {
    return this->pos;
}
unsigned ofxSpaceColonizationLeaf::getID() const {
    return this->leafID;
}
void ofxSpaceColonizationLeaf::setReached(bool _val){
    reached = _val;
}

void ofxSpaceColonizationLeaf::move(glm::vec3 _pos) {
    this->pos.x += _pos.x;
    this->pos.y += _pos.y;
    this->pos.z += _pos.z;
}



