inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 0 }));
  set_short( "Passage - x25y22z0" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y22z0.c",
  "north" : DIR+"/rooms/x25y23z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
