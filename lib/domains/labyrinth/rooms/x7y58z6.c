inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 6 }));
  set_short( "Passage - x7y58z6" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y58z6.c",
  "south" : DIR+"/rooms/x7y57z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
