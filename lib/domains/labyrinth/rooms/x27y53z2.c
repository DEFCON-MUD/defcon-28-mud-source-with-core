inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 53, 2 }));
  set_short( "Hallway - x27y53z2" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y54z2.c",
  "south" : DIR+"/rooms/x27y52z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
