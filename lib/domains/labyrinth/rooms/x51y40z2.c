inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 2 }));
  set_short( "Passage - x51y40z2" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y41z2.c",
  "south" : DIR+"/rooms/x51y39z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
