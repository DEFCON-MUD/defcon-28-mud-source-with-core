inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 58, 9 }));
  set_short( "Corridor - x13y58z9" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y58z9.c",
  "south" : DIR+"/rooms/x13y57z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
