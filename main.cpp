#include "hello/HelloWorld.hpp"
#include <gtkmm/builder.h>
#include <gtkmm/dialog.h>

Gtk::Dialog* dialog_ptr;

static void on_button_clicked() {
    if(dialog_ptr)
        dialog_ptr->hide();
}

int main( int argc, char *argv[] ) {

    auto app = Gtk::Application::create(argc,argv,"glade.basic.example");
    auto refBuilder = Gtk::Builder::create();
    refBuilder->add_from_file("../windows/cpp_GUI.glade");
    refBuilder->get_widget("DialogBasic", dialog_ptr);

    if(dialog_ptr) {
        Gtk::Button* button_ptr = nullptr;
        refBuilder->get_widget("quit_button", button_ptr);
        if(button_ptr)
            button_ptr->signal_clicked().connect( sigc::ptr_fun( on_button_clicked ) );
        app->run(*dialog_ptr);
    }

    delete dialog_ptr;
    return 0;
}