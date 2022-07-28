inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 3 }));
  set_short( "Hallway - x19y32z3" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y32z3.c",
  "east" : DIR+"/rooms/x20y32z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
