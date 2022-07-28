inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 0 }));
  set_short( "Corridor - x57y34z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y34z0.c",
  "south" : DIR+"/rooms/x57y33z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
