inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 28, 5 }));
  set_short( "Passage - x15y28z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y28z5.c",
  "north" : DIR+"/rooms/x15y29z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
