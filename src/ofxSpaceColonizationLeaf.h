#pragma once
#include "ofMain.h"

class ofxSpaceColonizationLeaf {

public:
    ofxSpaceColonizationLeaf(glm::vec3 vec);
    ofxSpaceColonizationLeaf(glm::vec3 vec, unsigned leafID); //add

    glm::vec3 getPosition() const;
    unsigned getID() const; //add
    void setReached(bool _val);
    bool isReached(){ return reached; };
    bool isReached() const { return reached; };
    void move(glm::vec3 pos);

private:
    bool reached = false;
    glm::vec3 pos;
    unsigned leafID;    //add
};


