#include <gtkmm-3.0/gtkmm.h>

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create(argc, argv, "org.example.my_gtkmm_app");

  // Create a window
  Gtk::Window window;
  window.set_default_size(200, 200);

  // Display "Hello, GTKMM!" in the window
  Gtk::Label label("Hello, GTKMM!");
  window.add(label);
  label.show();

  // Show the window and start the GTK main loop
  return app->run(window);
}
