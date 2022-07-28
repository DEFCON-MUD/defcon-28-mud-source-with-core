inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 8 }));
  set_short( "Passage - x15y16z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y16z8.c",
  "east" : DIR+"/rooms/x16y16z8.c",
  "north" : DIR+"/rooms/x15y17z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
