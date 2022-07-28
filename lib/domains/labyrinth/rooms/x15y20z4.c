inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 4 }));
  set_short( "Corridor - x15y20z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z4.c",
  "north" : DIR+"/rooms/x15y21z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
