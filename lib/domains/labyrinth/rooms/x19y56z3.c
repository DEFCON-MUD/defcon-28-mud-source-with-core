inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 3 }));
  set_short( "Corridor - x19y56z3" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y56z3.c",
  "south" : DIR+"/rooms/x19y55z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
