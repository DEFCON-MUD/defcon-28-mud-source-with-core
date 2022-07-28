inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 45, 8 }));
  set_short( "Corridor - x59y45z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y46z8.c",
  "south" : DIR+"/rooms/x59y44z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
