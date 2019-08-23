#ifndef KFTG_KEYS
#define KFTG_KEYS

#include "types.hpp"

enum class Keys
{
	TAB = 9,
	ESC = 27,
	SPACE = 32,
	ARROW_UP = 128,
	ARROW_DOWN,
	ARROW_LEFT,
	ARROW_RIGHT,
	BACKSPACE,
	LEFT_CTRL,
	RIGHT_CTRL,
	LEFT_SHIFT,
	RIGHT_SHIFT,
	LEFT_ALT,
	RIGHT_ALT,
	CAPS_LOCK,
	F1, F2, F3, F4, F5, F6,
	F7, F8, F9, F10, F11, F12,
	KP0, KP1, KP2, KP3, KP4,
	KP5, KP6, KP7, KP8, KP9,
	KPADD, KPMINUS, KPMULTIPLY, KPDIVIDE,
	KPDECIMAL, KPENTER
};

#endif // KEYS