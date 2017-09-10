#CMake config file for sources directory.

# define variables here.

# EIGEN_ROOT is the parent directory of the Eigen folder that contains files like Array, Core, Dense, etc.
SET(EIGEN_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../../eigen)

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


INCLUDE_DIRECTORIES (${EIGEN_ROOT})
add_executable (tbmsearch ${TBM_MAIN_SRCS})

