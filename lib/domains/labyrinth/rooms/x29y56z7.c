inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 7 }));
  set_short( "Hallway - x29y56z7" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y56z7.c",
  "south" : DIR+"/rooms/x29y55z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
