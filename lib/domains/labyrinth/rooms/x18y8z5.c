inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 8, 5 }));
  set_short( "Hallway - x18y8z5" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y8z5.c",
  "east" : DIR+"/rooms/x19y8z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
