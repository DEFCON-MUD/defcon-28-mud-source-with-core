inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 41, 3 }));
  set_short( "Hallway - x39y41z3" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y42z3.c",
  "south" : DIR+"/rooms/x39y40z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
