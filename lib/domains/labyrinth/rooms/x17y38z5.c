inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 5 }));
  set_short( "Passage - x17y38z5" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y39z5.c",
  "south" : DIR+"/rooms/x17y37z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
