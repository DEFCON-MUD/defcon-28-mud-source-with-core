inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 7 }));
  set_short( "Hallway - x17y48z7" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y48z7.c",
  "north" : DIR+"/rooms/x17y49z7.c",
  "south" : DIR+"/rooms/x17y47z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
