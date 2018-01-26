#pragma once

#include "ieditorcontroller.h"
#include "igraphiccontext.h"
#include "commandbutton.h"
#include "document.h"
#include "color.h"

/**
 * @brief Editor object declaration.
 */
class Editor
{
public:
    Editor(IEditorController* controller_, IGraphicContext* context_)
        : context(context_)
    {
        controller_->RegisterButton(CommandButton{"New Document", RectNew, std::bind(&Editor::StartNewDocument, this)});
        controller_->RegisterButton(CommandButton{"Import Document", RectImport, std::bind(&Editor::Import, this)});
        controller_->RegisterButton(CommandButton{"Export Document", RectExport, std::bind(&Editor::Export, this)});
        controller_->RegisterButton(CommandButton{"Draw Line", RectDrawLine, std::bind(&Editor::SelectLineTool, this)});
        controller_->RegisterButton(CommandButton{"Draw Circle", RectDrawCircle, std::bind(&Editor::SelectCircleTool, this)});
        controller_->RegisterButton(CommandButton{"Black", RectBlack, std::bind(&Editor::SelectBlackColor, this)});
        controller_->RegisterButton(CommandButton{"White", RectBlack, std::bind(&Editor::SelectWhiteColor, this)});
        controller_->RegisterButton(CommandButton{"Red", RectBlack, std::bind(&Editor::SelectRedColor, this)});
        controller_->RegisterDragAndDrop(std::bind(&Editor::Draw, this, std::placeholders::_1));
    }

    /// Clears the document
    void StartNewDocument()
    {
    }

    /// Makes line tool current
    void SelectLineTool()
    {
    }
    /// Makes circle tool current
    void SelectCircleTool()
    {
    }

    /// Selects black color as current
    void SelectBlackColor()
    {
        SelectColor(Color::Black);
    }
    /// Selects white color as current
    void SelectWhiteColor()
    {
        SelectColor(Color::White);
    }
    /// Selects red color as current
    void SelectRedColor()
    {
        SelectColor(Color::Red);
    }

    /// Creates selected shape by given rect and adds it to the document
    void Draw(const Rect& rect)
    {
    }

    /// Imports the document
    void Import()
    {
    }
    /// Exports the document
    void Export()
    {
    }

    /// Runs the editor
    void Run()
    {
    }

private:
    /// Imports the document from the file
    void ImportDocument(const std::string& filename)
    {
    }
    /// Exports the document from the file
    void ExportDocument(const std::string& filename)
    {
    }
    /// Sets color as current for document
    void SelectColor(Color color)
    {
    }

    Document document;
    Color color = Color::Default;
    IEditorController* controller;
    IGraphicContext* context;

    Rect RectNew{0, 0, 10, 10};
    Rect RectImport{30, 30, 40, 40};
    Rect RectExport{30, 30, 40, 40};
    Rect RectDrawLine{20, 20, 30, 30};
    Rect RectDrawCircle{30, 30, 40, 40};
    Rect RectBlack{30, 30, 40, 40};
};
