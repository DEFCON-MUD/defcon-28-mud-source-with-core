inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 4 }));
  set_short( "Hallway - x17y52z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y53z4.c",
  "south" : DIR+"/rooms/x17y51z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
