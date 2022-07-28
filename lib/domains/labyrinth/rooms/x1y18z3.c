inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 3 }));
  set_short( "Corridor - x1y18z3" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z3.c",
  "south" : DIR+"/rooms/x1y17z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
