inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 51, 2 }));
  set_short( "Hallway - x61y51z2" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y52z2.c",
  "south" : DIR+"/rooms/x61y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
