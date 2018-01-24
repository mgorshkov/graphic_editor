#pragma once

#include <memory>
#include <vector>

class Primitive;
/**
 * @brief Document operations (new/import/export).
 */
class Document
{
public:
    /// Starts a new document.
    void Clear()
    {
        shapes.clear();
    }

    /// Import a document from the file.
    void Import(const std::string& fileName)
    {
    }

    /// Export a document to the file.
    void Export(const std::string& fileName)
    {
    }

    /// Adds a shape.
    void AddShape(std::shared_ptr<Shape> shape);
    {
        shape.push_back(shape);
    }

private:
    std::vector<std::shared_ptr<Shape>> shapes;
};
