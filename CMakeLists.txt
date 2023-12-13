cmake_minimum_required(VERSION 3.14...3.24 FATAL_ERROR)

# cmake setup begin
project(libircclient)

find_package(OpenSSL REQUIRED)

add_library(libircclient
	./libircclient/include/libircclient.h
	./libircclient/include/libirc_rfcnumeric.h

	./libircclient/include/libirc_errors.h
	./libircclient/include/libirc_events.h
	./libircclient/include/libirc_options.h

	./libircclient/src/colors.c
	./libircclient/src/dcc.h
	./libircclient/src/dcc.c
	./libircclient/src/errors.c
	./libircclient/src/libircclient.c
	./libircclient/src/params.h
	./libircclient/src/portable.h
	./libircclient/src/portable.c
	./libircclient/src/session.h
	./libircclient/src/sockets.h
	./libircclient/src/ssl.h
	./libircclient/src/ssl.c
	./libircclient/src/utils.h
)

target_include_directories(libircclient PUBLIC ./libircclient/include)
target_compile_definitions(libircclient PUBLIC ENABLE_SSL=1)
target_link_libraries(libircclient PUBLIC
	OpenSSL::SSL
	#OpenSSL::Crypto
)

if(WIN32)
	target_link_libraries(libircclient PUBLIC ws2_32 iphlpapi)
endif()

