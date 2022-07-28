inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 5 }));
  set_short( "Hallway - x61y49z5" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z5.c",
  "south" : DIR+"/rooms/x61y48z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
