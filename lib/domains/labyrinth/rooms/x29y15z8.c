inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 15, 8 }));
  set_short( "Hallway - x29y15z8" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y16z8.c",
  "south" : DIR+"/rooms/x29y14z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
