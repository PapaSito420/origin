cmake_minimum_required(VERSION 3.8) 
project(vihicles_lib)

add_library(vihicles_lib SHARED vihicle.cpp vihicle.h 
                                    Landvihicle.cpp Landvihicle.h 
									    Boots.h Boots.cpp Camel.cpp Camel.h fastCamel.cpp fastCamel.h Centaur.cpp Centaur.h
										
							        Airvihicle.cpp Airvihicle.h 
										Broom.h Broom.cpp Flycarpet.h Flycarpet.h Eagle.h Eagle.cpp 
			)