inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 8, 6 }));
  set_short( "Hallway - x22y8z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y8z6.c",
  "east" : DIR+"/rooms/x23y8z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
