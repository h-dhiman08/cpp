#include <gtkmm.h>

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create("org.gtkmm.example");

    Gtk::Window window;
    window.set_default_size(400, 200);
    window.set_title("Hello GTKmm in C++");

    return app->run(window);
}
