inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 58, 8 }));
  set_short( "Corridor - x13y58z8" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y58z8.c",
  "south" : DIR+"/rooms/x13y57z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
