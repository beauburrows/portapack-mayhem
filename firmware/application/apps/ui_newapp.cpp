#include "ui_newapp.hpp"

#include "baseband_api.hpp"
#include "string_format.hpp"

using namespace portapack;

namespace ui {

void NewAppView::focus() {
	button.focus();
}

NewAppView::~NewAppView() {
	//transmitter_model.disable();
	//baseband::shutdown();
}


NewAppView::NewAppView(
	NavigationView& nav
) {
	add_children({
		&labels,
		&button
	});
	
	button.on_select = [this, &nav](Button&) {
		nav.pop();
	};
}

} /* namespace ui */
