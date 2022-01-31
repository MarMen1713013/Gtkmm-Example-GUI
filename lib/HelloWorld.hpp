#pragma once

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window {
public:
    HelloWorld();
    ~HelloWorld() = default;
protected: 
//  - signals
    void on_button_clicked();
//  - widgets
    Gtk::Button m_button;
};