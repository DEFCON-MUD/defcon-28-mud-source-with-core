inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 8, 2 }));
  set_short( "Hallway - x26y8z2" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y8z2.c",
  "east" : DIR+"/rooms/x27y8z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
