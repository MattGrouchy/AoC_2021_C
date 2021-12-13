#ifndef txt_read_write_h
#define txt_read_write_h

#include <vector>
#include <string>

struct openFileResult
{
  std::fstream theFile;
  bool success;
};
/* Function to open file and return the fstream. */
openFileResult openFile(const std::string &path_name);

/* Function to separate lines by a delimiter token. For example, can separate words by spaces. */
std::vector<std::string>
tokenize(const std::string &str, const std::string &delimiters);

#endif /* txt_read_write_h */