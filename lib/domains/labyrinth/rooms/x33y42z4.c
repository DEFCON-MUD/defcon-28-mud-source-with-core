inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 4 }));
  set_short( "Passage - x33y42z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y42z4.c",
  "south" : DIR+"/rooms/x33y41z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
