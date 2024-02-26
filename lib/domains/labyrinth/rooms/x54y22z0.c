inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 22, 0 }));
  set_short( "Corridor - x54y22z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y22z0.c",
  "east" : DIR+"/rooms/x55y22z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
