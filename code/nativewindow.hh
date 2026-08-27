/*******************************************************************************
 *                                O P E N  T S
 *******************************************************************************
 * SPDX-License-Identifier: GPL-3.0-or-later
 * Copyright 2026 OpenTS contributors
 *
 * See LICENSE.md for applicable additional terms and warranty disclaimers.
 ******************************************************************************/

#pragma once


enum class NativeWindowType
{
	Default,
	Wayland
};


// The native handles bgfx needs to present into a window supplied by the application shell.
// Display is unused on platforms where the window identifies its display by itself.
struct NativeWindow
{
	void * Display;
	void * Handle;
	NativeWindowType Type;
};
