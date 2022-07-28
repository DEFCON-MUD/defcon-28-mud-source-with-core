inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 1 }));
  set_short( "Hallway - x3y6z1" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y6z1.c",
  "south" : DIR+"/rooms/x3y5z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
