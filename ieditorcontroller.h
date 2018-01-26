#pragma once

#include "commandbutton.h"

/**
 * @brief The interface of editor controller.
 */
class IEditorController
{
public:
    virtual ~IEditorController() {}

    virtual void RegisterButton(const CommandButton& button) = 0;
    virtual void RegisterDragAndDrop(std::function<void(const Rect&)>) = 0;

    virtual void Run() = 0;
};
