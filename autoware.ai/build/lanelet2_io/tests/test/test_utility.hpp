#pragma once
#ifndef TEST_PATH_USE_STD_FILESYSTEM

#if __cplusplus >= 201703L && defined(__has_include)
#if __has_include(<filesystem>)
#define TEST_PATH_USE_STD_FILESYSTEM 1
#endif
#endif
#ifndef TEST_PATH_USE_STD_FILESYSTEM
#define TEST_PATH_USE_STD_FILESYSTEM 0
#endif

#if TEST_PATH_USE_STD_FILESYSTEM
#include <filesystem>
#else
#include <boost/filesystem.hpp>
#endif

namespace lanelet2_io {
namespace test{

#ifdef TEST_PATH_USE_STD_FILESYSTEM
static const std::filesystem::path projectRootDir{"/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_io"};
#else
static const boost::filesystem::path projectRootDir{"/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_io"};
#endif

} // namespace test
} // namespace lanelet2_io

#endif
