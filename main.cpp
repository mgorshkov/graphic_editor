/**
 * @file main.cpp
 *
 * main file for vector graphical editor.
 */

#include "document.h"

Editor editor;

class CommandButton
{
public:

private:
    std::string name;
    Rect rect;
};

class MouseController
{
public:
    void ClickMouse(int x, int y);
    {
        controller.ClickMouse(x, y);
    }

    void DragMouse(int x, int y);
    {
        editor.DragMouse(x, y);
    }

    void ReleaseMouse();
    {
        editor.ReleaseMouse();
    }
};

class EditorController
{
public:
    EditorController()
    {
        RegisterButton("New", Rect{10, 10, 20, 20}, Editor::StartNewDocument);
        RegisterButton("Line", Rect{20, 20, 30, 30}, Editor::StartNewDocument);

    void RegisterButton(const std::string& name, const Rect& position, std::function callback);
    void Click(int x, int y);
};


int main(int, char const **)
{
    EditorController;
    Editor;
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
