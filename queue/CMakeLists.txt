cmake_minimum_required(VERSION 3.2)
set(CMAKE_MODULE_PATH ../cmake)

# This is your project name
project (queue)

include (MacroOpenSplice)
include (osmacros)
find_package (OpenSplice REQUIRED)
find_package (DILib      REQUIRED)

#
# You may add your include directories below
#
include_directories(
  ${PROJECT_SOURCE_DIR}
  ${OpenSplice_INCLUDE_DIRS}
  ${DILib_INCLUDE_DIRS}
)


# Define the idl file that you want to be compiled
set (idls sqmessage.idl)


foreach(idl ${idls})
	OpenSplice_IDLGEN (${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1.cpp" VARS_1 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1.h" VARS_2 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1Dcps.cpp" VARS_3 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1Dcps.h" VARS_4 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1Dcps_impl.cpp" VARS_5 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1Dcps_impl.h" VARS_6 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1SplDcps.cpp" VARS_7 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/\\1SplDcps.h" VARS_8 ${idl})
        string (REGEX REPLACE "\(.*\).idl" "gen/ccpp_\\1.h" VARS_9 ${idl})
	set(OpenSplice_DATAMODEL ${OpenSplice_DATAMODEL} ${VARS_1} ${VARS_2} ${VARS_3} ${VARS_4} ${VARS_5} ${VARS_6} ${VARS_7} ${VARS_8} ${VARS_9})
endforeach(idl)

set (QP_SOURCES
  sqp.cxx
)

set (QC_SOURCES
  sqc.cxx	
)



set (EXE_QP sqp)
set (EXE_QC sqc)

set (DATAMODEL datamodel)

add_executable (${EXE_QP} ${QP_SOURCES})
add_executable (${EXE_QC} ${QC_SOURCES})
add_library (${DATAMODEL} STATIC ${OpenSplice_DATAMODEL})

add_definitions (
 ${OpenSplice_DEFINITIONS}
 ${DEFINITIONS}
)

target_link_libraries (
  ${DATAMODEL} 
  ${OpenSplice_LIBRARIES}
  ${DILib_LIBRARIES}
)

target_link_libraries (${EXE_QP}
 ${OpenSplice_LIBRARIES}
 ${DILib_LIBRARIES}	
 ${DATAMODEL}
)

target_link_libraries (${EXE_QC}
 ${OpenSplice_LIBRARIES}
 ${DILib_LIBRARIES}
 ${DATAMODEL}
)


