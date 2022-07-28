inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 3 }));
  set_short( "Hallway - x55y40z3" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y40z3.c",
  "south" : DIR+"/rooms/x55y39z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
