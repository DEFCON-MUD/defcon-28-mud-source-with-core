inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 2 }));
  set_short( "Hallway - x29y27z2" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z2.c",
  "south" : DIR+"/rooms/x29y26z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
