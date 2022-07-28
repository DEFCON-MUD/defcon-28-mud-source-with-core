inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 41, 3 }));
  set_short( "Hallway - x41y41z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y42z3.c",
  "south" : DIR+"/rooms/x41y40z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
