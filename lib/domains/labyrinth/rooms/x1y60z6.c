inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 6 }));
  set_short( "Passage - x1y60z6" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z6.c",
  "north" : DIR+"/rooms/x1y61z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
