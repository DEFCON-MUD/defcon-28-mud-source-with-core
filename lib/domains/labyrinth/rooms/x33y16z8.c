inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 16, 8 }));
  set_short( "Hallway - x33y16z8" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y16z8.c",
  "east" : DIR+"/rooms/x34y16z8.c",
  "north" : DIR+"/rooms/x33y17z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
