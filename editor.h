#pragma once

/**
 * @brief Editor operations.
 */
class Editor
{
public:
    Editor();

    /// Clears the document
    void StartNewDocument();

    /// Sets color as current for document
    void SelectColor(Color color);
    /// Makes line tool current
    void SelectLineTool();
    /// Makes circle tool current
    void SelectCircleTool();

    /// Creates selected shape by given rect and adds it to the document
    void Draw(const Rect& rect);    

    /// Imports the document from the file
    void ImportDocument(const std::string& filename);
    /// Imports the document from the file
    void ExportDocument(const std::string& filename);

private:
    Document document;
    Color color = Color::Default;
};
