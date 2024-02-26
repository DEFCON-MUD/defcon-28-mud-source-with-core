inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 50, 0 }));
  set_short( "Hallway - x20y50z0" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y50z0.c",
  "east" : DIR+"/rooms/x21y50z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
