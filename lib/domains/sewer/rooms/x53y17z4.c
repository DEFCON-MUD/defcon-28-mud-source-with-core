inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 4 }));
  set_short( "Hallway - x53y17z4" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z4.c",
  "south" : DIR+"/rooms/x53y16z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
