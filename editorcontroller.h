#pragma once

#include "ieditorcontroller.h"

/**
 * @brief Controls the behaviour of editor.
 */
class EditorController : public IEditorController
{
public:
    void RegisterButton(const CommandButton& button) override
    {
    }

    void RegisterDragAndDrop(std::function<void(const Rect&)>) override
    {
    }

    void Run() override
    {
    }

private:
    void Click(int x, int y)
    {
    }
};

