inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 20, 8 }));
  set_short( "Corridor - x34y20z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y20z8.c",
  "east" : DIR+"/rooms/x35y20z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
