inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 31, 1 }));
  set_short( "Hallway - x47y31z1" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y32z1.c",
  "south" : DIR+"/rooms/x47y30z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
