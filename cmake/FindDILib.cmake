SET(DILib_INCLUDE_DIRS 
	$ENV{DILIB_HOME}/src 
)

# Find libraries
FIND_LIBRARY(DILib_LIBRARY
	NAMES
		dilib
	PATHS
		$ENV{DILIB_HOME}/lib
)


SET(DILib_LIBRARIES
			${DILib_LIBRARY}

)


IF (DILib_INCLUDE_DIRS AND DILib_LIBRARIES)
	SET(DILib_FOUND TRUE)
ENDIF (DILib_INCLUDE_DIRS AND DILib_LIBRARIES)

IF (DILib_FOUND)
	MESSAGE(STATUS "Found DILib DDS libraries: ${DILib_LIBRARIES}")

ELSE (DILib_FOUND)
	IF (DILib_FIND_REQUIRED)
		MESSAGE(FATAL_ERROR "Could not find DILib DDS")
	ENDIF (DILib_FIND_REQUIRED)
ENDIF (DILib_FOUND)
