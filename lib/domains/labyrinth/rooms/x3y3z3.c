inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 3, 3 }));
  set_short( "Hallway - x3y3z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y4z3.c",
  "south" : DIR+"/rooms/x3y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
