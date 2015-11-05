#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::setup(){
    
    ofBackground(0,0,0); // black background
    
    for(int i = 0; i < Nums; i ++) { // looping through all the particles
        
    // create the particles randomly across the canvas and with a random size diamter of the particles 
    part[i] = new Particles(ofRandom(200, 600), ofRandom(200,600), ofRandom(1,6));
        
    }
}

//--------------------------------------------------------------

void ofApp::update(){
    
    for(int i = 0; i < Nums; i ++) { // looping through all the particles
        
        part[i]->update(); // updating the particles
    }
}

//--------------------------------------------------------------

void ofApp::draw(){
    
    for(int i = 0; i < Nums; i ++) { // looping through all the particles
        
        part[i]->display(); // displaying the particles
    }
    
    // draw lines between near points
    
    float dist = 60; // Threshold parameter of distance
    
    for (int i = 0; i < Nums; i ++) { // nested for loop
        for (int j = i +1; j < Nums; j ++) {
            
            //calculating the distance between two points with ofDist and if the distance between these two points is less than 60 then draw a line between these points
            if ( ofDist( part[i]->x, part[i]->y, part[j]->x, part[j]->y ) < dist ) {
                
                 ofLine(part[i]->x,part[i]->y, part[j]->x, part[j]->y );
                // because I am using pointers you call part[i]->x instead of part[i].x
            }
        }
    }
}


