inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 4 }));
  set_short( "Corridor - x9y40z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y41z4.c",
  "south" : DIR+"/rooms/x9y39z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
