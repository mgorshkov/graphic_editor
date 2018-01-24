/**
 * @file main.cpp
 *
 * main file for vector graphical editor.
 */

#include "document.h"

Editor editor;

class InputController
{
    void ClickMouse(int x, int y);
    {
        editor.ClickMouse(x, y);
    }

    void ReleaseMouse();
    {
        editor.ReleaseMouse();
    }
};

int main(int, char const **)
{
    editor.StartNewDocument();
    editor.SelectColor(Color::Black);
    editor.SelectLineTool();
    editor.ClickMouse(100, 200);
    editor.DragTo(500, 600);
    editor.ReleaseMouse();
    editor.SelectCircleTool();
    editor.SelectColor(Color::Red);
    editor.ClickMouse(300, 300);
    editor.DragMouse(400, 400);
    editor.ExportDocument("drawing.swg");
    return 0;
}
