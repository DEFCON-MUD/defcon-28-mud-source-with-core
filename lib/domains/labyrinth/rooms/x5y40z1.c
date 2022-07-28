inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 1 }));
  set_short( "Corridor - x5y40z1" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y41z1.c",
  "south" : DIR+"/rooms/x5y39z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
