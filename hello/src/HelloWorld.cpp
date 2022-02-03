#include "hello/HelloWorld.hpp"
#include <iostream>

HelloWorld::HelloWorld() : m_button("Hello World") {
    // Set size
    set_border_width(10);

    // connect signals
    m_button.signal_clicked().connect( sigc::mem_fun( *this, &HelloWorld::on_button_clicked ) );
    // add the button on the window
    add(m_button);
    // and finally show it
    m_button.show();
}

void HelloWorld::on_button_clicked() {
    std::cout << "Hello, World!" << std::endl;
}