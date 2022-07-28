inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 51, 6 }));
  set_short( "Hallway - x21y51z6" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y52z6.c",
  "south" : DIR+"/rooms/x21y50z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
