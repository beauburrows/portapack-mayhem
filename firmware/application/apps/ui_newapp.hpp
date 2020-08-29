#include "ui.hpp"
#include "ui_transmitter.hpp"
#include "transmitter_model.hpp"

namespace ui {

class NewAppView : public View {
public:
    NewAppView(NavigationView& nav);
    ~NewAppView();
    
    void focus() override;
    
    std::string title() const override { return "Custom remote"; };

private:
    /*enum tx_modes {
        IDLE = 0,
        SINGLE,
        SCAN
    };
    
    tx_modes tx_mode = IDLE;

    struct remote_layout_t {
        Point position;
        std::string text;
    };
    
    const std::array<remote_layout_t, 32> remote_layout { };*/
    
    Labels labels {
        { { 1 * 8, 0 }, "Work in progress...", Color::light_grey() }
    };
    
    Button button {
        { 60, 64, 120, 32 },
        "Exit"
    };
};

} /* namespace ui */