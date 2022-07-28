inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 20, 4 }));
  set_short( "Hallway - x26y20z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y20z4.c",
  "east" : DIR+"/rooms/x27y20z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
