#pragma once

#include "ofMain.h"
#include "particles.h"

#define Nums 300 // number of particles

class ofApp : public ofBaseApp{

	public:
    
		void setup();
		void update();
		void draw();
    
        Particles *part[Nums]; // creating a pointer ( a refrence in memory) for each object
		
};
