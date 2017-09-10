#CMake config file for sources directory.


# to add a source file, add cpp or cxx files to TBM_LIB_SRCS
SET(TBM_LIB_SRCS
	# somecode.cpp
	common.cpp)

# For Visual Studio, one need to add .h files here.
IF(WIN32)
	SET(TBM_LIB_SRCS 
		${TBM_LIB_SRCS}
		# somecode.h
		common.h 
	)
	
	source_group("Header Files" FILES *.h)
ENDIF(WIN32)


SET(TBM_MAIN_SRCS
	${TBM_LIB_SRCS}
	main.cpp)


# INCLUDE_DIRECTORIES (${CMAKE_CURRENT_SOURCE_DIR}/../../eigen/)
add_executable (tbmsearch ${STRBIT_MAIN_SRCS})

