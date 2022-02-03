#include "hello/HelloWorld.hpp"

int main( int argc, char *argv[] ) {

    auto app = Gtk::Application::create(argc,argv,"example.base");

    HelloWorld helloWorld;

    return app->run(helloWorld);
}