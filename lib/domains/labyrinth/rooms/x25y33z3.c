inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 33, 3 }));
  set_short( "Corridor - x25y33z3" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y34z3.c",
  "south" : DIR+"/rooms/x25y32z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
