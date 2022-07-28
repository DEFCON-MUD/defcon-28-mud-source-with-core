inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 3 }));
  set_short( "Corridor - x31y60z3" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y60z3.c",
  "north" : DIR+"/rooms/x31y61z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
