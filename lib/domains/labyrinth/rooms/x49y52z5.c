inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 5 }));
  set_short( "Hallway - x49y52z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y52z5.c",
  "north" : DIR+"/rooms/x49y53z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
