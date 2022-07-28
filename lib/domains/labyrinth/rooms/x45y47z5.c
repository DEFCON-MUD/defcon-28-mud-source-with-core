inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 47, 5 }));
  set_short( "Hallway - x45y47z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y48z5.c",
  "south" : DIR+"/rooms/x45y46z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
