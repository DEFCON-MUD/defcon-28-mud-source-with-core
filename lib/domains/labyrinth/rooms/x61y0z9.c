inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 0, 9 }));
  set_short( "Hallway - x61y0z9" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y0z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
