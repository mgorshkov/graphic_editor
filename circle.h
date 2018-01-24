#pragma once

#include <vector>

class Primitive;
/**
 * @brief Document operations (new/import/export).
 */
class Document
{
public:
    /// Starts a new document.
    Document()
    {
    }

    /// Import a document from the file.
    void Import(const std::string& fileName)
    {
    }

    /// Export a document to the file.
    void Export(const std::string& fileName)
    {
    }

    /// Adds a primitive.
    void AddPrimitive(Primitive* primitive);
    {
        primitives.push_back(primitive);
    }

private:
    std::vector<Privitive*> primitives;
};
