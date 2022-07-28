inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 25, 2 }));
  set_short( "Corridor - x5y25z2" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y26z2.c",
  "south" : DIR+"/rooms/x5y24z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
