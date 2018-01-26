/**
 * @file main.cpp
 *
 * main file for vector graphical editor.
 */

#include "editorcontroller.h"
#include "graphiccontext.h"
#include "editor.h"

int main(int, char const **)
{
    EditorController controller;
    GraphicContext context;
    Editor editor(&controller, &context);
    editor.Run();
    return 0;
}
