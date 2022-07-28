inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 5 }));
  set_short( "Hallway - x33y43z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z5.c",
  "south" : DIR+"/rooms/x33y42z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
