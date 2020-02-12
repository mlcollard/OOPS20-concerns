/*
    PDFReader.cpp

    Implementation of PDFReader class that processes all words
    in a PDF file
*/

#include "PDFReader.hpp"

#include <istream>
#include <memory>

// pimpl idiom implementation
struct PDFReader::PDFReaderImpl {
    // number of times words are read
    int count = 0;
};

// constructor
PDFReader::PDFReader(std::istream& inputSource)
    : impl(new PDFReaderImpl) {
}

// if all input has been processed
bool PDFReader::isDone() const {

    return impl->count > 0;
}

// read and process words
void PDFReader::readWord(int& article_the_count, int& article_a_count, int& article_an_count, int& totalArticles) {

    // processing pdf (implementation not shown)
    // ...

    // simulate reading words from PDF
    article_the_count = 1;
    article_a_count = 0;
    article_an_count = 0;
    totalArticles = 1;

    ++impl->count;
}

// destructor - required for pimpl idiom with std::unique_ptr
PDFReader::~PDFReader() {}
