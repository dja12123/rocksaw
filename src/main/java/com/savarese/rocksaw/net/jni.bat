set CURPATH=%cd%
javac RawSocket.java
javah.exe -o RawSocket.h -jni -classpath  "%CURPATH%/../../../../" com.savarese.rocksaw.net.RawSocket