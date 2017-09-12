<h3>
<a id="user-content-to-compile-and-run-the-program" class="anchor" href="#to-compile-and-run-the-program" aria-hidden="true"><svg aria-hidden="true" class="octicon octicon-link" height="16" version="1.1" viewbox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>To compile and run the program</h3>
<ul>
<li>Download and install <a href="https://cmake.org/">CMake</a> of version 2.8.11 or later.</li>
<li>Download the latest C++ library for linear algebra <a href="http://eigen.tuxfamily.org/index.php?title=Main_Page">Eigen</a>. Extract the downloaded file (no installation is required).</li>
<li>Change the value of the variable <code>$EIGEN_ROOT</code> in the CMakeList.txt under the project root folder to the path of the Eigen library.
<code>SET(EIGEN_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../eigen)</code><br>
where ${CMAKE_CURRENT_SOURCE_DIR} is the project root folder.</li>
<li>Create a directory "build" under the project root folder and cd to the "build" folder under command line.</li>
<li>Run "cmake ../" under the command line.</li>
<li>On unix-like os, type "make" to compile the program and then "source/tbmsearch" to execute program. On Windows system with Visual Studio, double click tbmsearch.sln to start the Visual studio.</li>
</ul>
