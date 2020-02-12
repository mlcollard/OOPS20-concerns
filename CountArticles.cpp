/*
    CountArticlesPDF.cpp

    Summarize the use of English language articles in a PDF document
*/

#include <iostream>
#include "PDFReader.hpp"

int main(int argc, char* argv[]) {

    // number of each English language article
    int article_the_count = 0;
    int article_a_count = 0;
    int article_an_count = 0;

    // total article count
    int totalArticles = 0;

    PDFReader pdf(std::cin);
    while (!pdf.isDone()) {

        // read each word from the PDF
        pdf.readWord(article_the_count, article_a_count, article_an_count, totalArticles);
    }

    // output report on english-language articles
    std::cout << "the" << ": " << article_the_count << '\n';
    std::cout << "an"  << ": " << article_an_count  << '\n';
    std::cout << "a"   << ": " << article_a_count   << '\n';
    std::cout << "Total Articles"   << ": " << totalArticles << '\n';

    return 0;
}
