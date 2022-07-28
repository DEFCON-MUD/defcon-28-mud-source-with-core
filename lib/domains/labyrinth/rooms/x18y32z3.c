inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 32, 3 }));
  set_short( "Hallway - x18y32z3" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y32z3.c",
  "east" : DIR+"/rooms/x19y32z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
