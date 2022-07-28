inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 24, 1 }));
  set_short( "Hallway - x10y24z1" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y24z1.c",
  "east" : DIR+"/rooms/x11y24z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
