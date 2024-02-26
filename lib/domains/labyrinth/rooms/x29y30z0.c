inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 0 }));
  set_short( "Corridor - x29y30z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y30z0.c",
  "north" : DIR+"/rooms/x29y31z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
