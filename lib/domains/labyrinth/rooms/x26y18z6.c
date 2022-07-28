inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 18, 6 }));
  set_short( "Hallway - x26y18z6" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y18z6.c",
  "east" : DIR+"/rooms/x27y18z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
