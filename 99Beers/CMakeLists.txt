# CMakeList.txt : CMake project for 99Beers, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (99Beers "99Beers.cpp"  "Verse.h" "NoBeers.h" "NoBeers.cpp" "OneBeer.h" "OneBeer.cpp" "TwoBeers.h" "TwoBeers.cpp" "ManyBeers.h" "ManyBeers.cpp" "Verse.cpp" "VerseFactory.h" "VerseFactory.cpp" "Song.h" "Song.cpp")

# TODO: Add tests and install targets if needed.
