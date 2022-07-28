inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 27, 9 }));
  set_short( "Hallway - x23y27z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y28z9.c",
  "south" : DIR+"/rooms/x23y26z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
