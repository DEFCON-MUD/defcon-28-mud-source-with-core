inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 16, 6 }));
  set_short( "Passage - x51y16z6" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y16z6.c",
  "north" : DIR+"/rooms/x51y17z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
