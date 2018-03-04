cmake_minimum_required(VERSION 3.4.1)

find_library( # Sets the name of the path variable.
              log-lib
              log )

add_library( # Sets the name of the library.
             bspatch

             SHARED

             src/main/cpp/bzip/blocksort.c
             src/main/cpp/bzip/bzip2.c
             src/main/cpp/bzip/bzip2recover.c
             src/main/cpp/bzip/bzlib.c
             src/main/cpp/bzip/compress.c
             src/main/cpp/bzip/crctable.c
             src/main/cpp/bzip/decompress.c
             src/main/cpp/bzip/dlltest.c
             src/main/cpp/bzip/huffman.c
             src/main/cpp/bzip/mk251.c
             src/main/cpp/bzip/randtable.c
             src/main/cpp/bzip/spewG.c
             src/main/cpp/bzip/unzcrash.c
             src/main/cpp/bspatch.c
)

target_link_libraries( # Specifies the target library.
                       bspatch
                       ${log-lib} )