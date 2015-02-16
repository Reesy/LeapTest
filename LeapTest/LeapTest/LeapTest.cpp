// LeapTest.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include "Leap.h"

using namespace Leap;

class SampleListener : public Listener {
public:
	virtual void onConnect(const Controller&);
	virtual void onFrame(const Controller&);
};

void SampleListener::onConnect(const Controller& controller) {
	std::cout << "Connected" << std::endl;
}

void SampleListener::onFrame(const Controller& controller) {
	std::cout << "Frame available" << std::endl;
}
int main()
{
	SampleListener listener;
	Leap::Controller controller;

  //  Console::WriteLine(L"Hello World");

	controller.addListener(listener);
	Frame frame = controller.frame();

	ImageList images = frame.images();
	for (int i = 0; i < 2; i++){
		Image image = images[i];
		std::cout << "DING" << std::endl;
		const unsigned char* image_buffer = image.data();

		}
	
	std::cout << "HEllo, world!";
	std::cin.get();

	controller.removeListener(listener);

    return 0;
}
