cmake_minimum_required(VERSION 3.24 FATAL_ERROR)

# cmake setup begin
project(libircclient)

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
	./libircclient/src/portable.c
	./libircclient/src/session.h
	./libircclient/src/sockets.c
	./libircclient/src/ssl.c
	./libircclient/src/utils.c
)

target_include_directories(libircclient PUBLIC ./libircclient/include)

