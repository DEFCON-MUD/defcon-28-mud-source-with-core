inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 4 }));
  set_short( "Hallway - x1y54z4" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y55z4.c",
  "south" : DIR+"/rooms/x1y53z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
