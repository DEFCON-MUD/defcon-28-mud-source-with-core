inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 33, 5 }));
  set_short( "Passage - x13y33z5" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y34z5.c",
  "south" : DIR+"/rooms/x13y32z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
