inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 44, 8 }));
  set_short( "Passage - x23y44z8" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y44z8.c",
  "south" : DIR+"/rooms/x23y43z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
