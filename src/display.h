#pragma once;


namespace display_resource
{
	enum resource_type
	{
		background,
		notes,
		keyboard_unmapped_down,
		keyboard_unmapped_up,
		keyboard_note_down,
		keyboard_note_up,
		midi_black_down,
		midi_black_up,
		midi_white_down,
		midi_white_up,

		resource_count
	};
};

// init display
int display_init(HWND hwnd);

// terminate display
int display_shutdown();

// send keyboard event to display system
void display_keyboard_event(byte code, uint status);

// send midi event to display system
void display_midi_event(byte data1, byte data2, byte data3, byte data4);

// display set image
void display_set_image(uint type, const char * name);

// display render
void display_render();

// display process emssage
int display_process_message(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);