inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 30, 2 }));
  set_short( "Corridor - x6y30z2" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y30z2.c",
  "east" : DIR+"/rooms/x7y30z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
