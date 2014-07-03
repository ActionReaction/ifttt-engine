-- A solution contains projects, and defines the available configurations
solution "arp"
   configurations { "Debug", "Release" }
 
   -- A project defines one build target
   project "arp"
      kind "ConsoleApp"
      language "C++"
      files { "**.h", "**.cpp" }
 
      configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
         buildoptions {
               -- Enable C++11 standard. VS2010 and higher automatically support C++11
               -- but we have to enable it manually on GNU C++ and Intel C++
               "-std=c++0x"
            }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }  
         buildoptions {
               -- Enable C++11 standard. VS2010 and higher automatically support C++11
               -- but we have to enable it manually on GNU C++ and Intel C++
               "-std=c++0x"
            } 