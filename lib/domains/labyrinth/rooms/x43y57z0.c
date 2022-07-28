inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 57, 0 }));
  set_short( "Passage - x43y57z0" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y58z0.c",
  "south" : DIR+"/rooms/x43y56z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
