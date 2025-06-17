# Readability — CS50x

This is my solution to the **Readability** problem from [CS50x](https://cs50.harvard.edu/x), Week 2.

## 📚 Problem Summary

Prompt the user for a block of text, then analyze it to calculate the approximate U.S. grade level necessary to comprehend the text using the **Coleman–Liau index**.

### 🧠 Coleman–Liau Formula

index = 0.0588 * L - 0.296 * S - 15.8

- `L` = average number of **letters per 100 words**
- `S` = average number of **sentences per 100 words**

## 💡 Concepts Used

- String traversal and analysis
- Counting letters, words, and sentence-ending punctuation
- Integer vs. float division
- ASCII character classification (`isalpha`, `isspace`, `ispunct`)
- Coleman-Liau readability formula
