inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 9 }));
  set_short( "Hallway - x13y12z9" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y12z9.c",
  "north" : DIR+"/rooms/x13y13z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
