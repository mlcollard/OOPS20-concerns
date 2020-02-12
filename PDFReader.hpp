/*
    PDFReader.hpp

    Declaration for PDFReader class that processes all words
    in a PDF file
*/

#ifndef INCLUDED_PDFREADER_HPP
#define INCLUDED_PDFREADER_HPP

#include <istream>
#include <memory>

class PDFReader {
public:
    // constructor
    PDFReader(std::istream& inputSource);

    // if all input has been processed
    bool isDone() const;

    // read and process words
    void readWord(int& article_the_count, int& article_a_count, int& article_an_count, int& totalArticles);

    // destructor - required for pimpl idiom with std::unique_ptr
    ~PDFReader();

private:
    struct PDFReaderImpl;
    std::unique_ptr<PDFReaderImpl> impl; 
};

#endif
