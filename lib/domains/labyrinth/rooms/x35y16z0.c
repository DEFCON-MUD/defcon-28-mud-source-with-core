inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 0 }));
  set_short( "Corridor - x35y16z0" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y16z0.c",
  "north" : DIR+"/rooms/x35y17z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
