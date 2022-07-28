inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 7 }));
  set_short( "Passage - x11y44z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y44z7.c",
  "east" : DIR+"/rooms/x12y44z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
