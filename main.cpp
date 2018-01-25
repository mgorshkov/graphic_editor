/**
 * @file main.cpp
 *
 * main file for vector graphical editor.
 */

#include "document.h"
#include "graphiccontext.h"

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
        RegisterButton("Line", Rect{20, 20, 30, 30}, Editor::SelectLineTool);
        RegisterButton("Circle", Rect{30, 30, 40, 40}, Editor::SelectCircleTool);
    }

    void Run();

private:
    void RegisterButton(const std::string& name, const Rect& position, std::function callback);
    void Click(int x, int y);
};

int main(int, char const **)
{
    EditorController controller;
    GraphicContext context;
    Editor editor(controller, context);
    editor.Run();
    return 0;
}
