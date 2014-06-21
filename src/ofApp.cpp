#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	ofEnableSmoothing();
    
    //set some sketch parameters
    //Background Color
    red = 233;
    blue = 240;
    green = 52;
    alpha = 200;
    radius = 500;
    drawFill = true;
    backgroundColor = ofColor(233, 255, 255);
    resolution = 30;
    position = ofPoint(ofGetWidth()*.5, ofGetHeight()*.5);
    ofSetCircleResolution(resolution);
    
    gui = new ofxUISuperCanvas("SUPER COMPACT", OFX_UI_FONT_MEDIUM);
    gui->addSpacer();
    gui->addTextArea("TEXT AREA", "Double tap the title above to toggle minified mode. Draw the title above to move the canvas around. All these settings are saved up exiting. This is super indead.");
    gui->addSpacer();
    gui->addSlider("RADIUS", 0.0, 1000.0, &radius);
    gui->addSlider("RED", 0.0, 255.0, &red);
    gui->addSlider("GREEN", 0.0, 255.0, &green);
    gui->addSlider("BLUE", 0.0, 255.0, &blue);
    gui->addSlider("ALPHA", 0.0, 255.0, &alpha);
    gui->addSpacer();
    gui->add2DPad("CENTER", ofPoint(0,ofGetWidth()), ofPoint(0, ofGetHeight()), &position);
    gui->addLabelToggle("DRAWFILL", &drawFill);
    gui->autoSizeToFitWidgets();
    ofAddListener(gui->newGUIEvent,this,&ofApp::guiEvent);

    gui->loadSettings("guiSettings.xml");
}

//--------------------------------------------------------------
void ofApp::update(){

}
void ofApp::guiEvent(ofxUIEventArgs &e)
{
//
}
//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(backgroundColor);
	ofPushStyle();
	ofEnableBlendMode(OF_BLENDMODE_ALPHA);

    ofSetColor(red, green, blue, alpha);
    if(drawFill)
    {
        ofFill();
    }
    else
    {
        ofNoFill();
    }

    ofCircle(position.x, position.y, radius);

	ofPopStyle();
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::touchDown(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchMoved(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchUp(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchCancelled(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::swipe(ofxAndroidSwipeDir swipeDir, int id){

}

//--------------------------------------------------------------
void ofApp::pause(){

}

//--------------------------------------------------------------
void ofApp::stop(){

}

//--------------------------------------------------------------
void ofApp::resume(){

}

//--------------------------------------------------------------
void ofApp::reloadTextures(){

}

//--------------------------------------------------------------
bool ofApp::backPressed(){
	return false;
}

//--------------------------------------------------------------
void ofApp::okPressed(){

}

//--------------------------------------------------------------
void ofApp::cancelPressed(){

}
