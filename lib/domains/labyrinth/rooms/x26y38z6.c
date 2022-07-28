inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 6 }));
  set_short( "Passage - x26y38z6" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z6.c",
  "east" : DIR+"/rooms/x27y38z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
