inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 19, 1 }));
  set_short( "Corridor - x15y19z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y20z1.c",
  "south" : DIR+"/rooms/x15y18z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
