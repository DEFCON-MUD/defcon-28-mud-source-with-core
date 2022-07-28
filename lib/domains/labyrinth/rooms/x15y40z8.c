inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 40, 8 }));
  set_short( "Corridor - x15y40z8" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y40z8.c",
  "south" : DIR+"/rooms/x15y39z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
