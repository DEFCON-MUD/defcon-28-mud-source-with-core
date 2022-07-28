inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 7 }));
  set_short( "Corridor - x33y38z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y38z7.c",
  "north" : DIR+"/rooms/x33y39z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
