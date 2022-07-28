inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 39, 0 }));
  set_short( "Hallway - x7y39z0" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y40z0.c",
  "south" : DIR+"/rooms/x7y38z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
