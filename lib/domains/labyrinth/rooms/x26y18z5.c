inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 18, 5 }));
  set_short( "Corridor - x26y18z5" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y18z5.c",
  "east" : DIR+"/rooms/x27y18z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
