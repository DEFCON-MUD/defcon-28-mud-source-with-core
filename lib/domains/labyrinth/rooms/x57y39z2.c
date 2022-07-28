inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 39, 2 }));
  set_short( "Passage - x57y39z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y40z2.c",
  "south" : DIR+"/rooms/x57y38z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
