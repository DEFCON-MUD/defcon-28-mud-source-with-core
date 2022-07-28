inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 34, 7 }));
  set_short( "Hallway - x1y34z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y35z7.c",
  "south" : DIR+"/rooms/x1y33z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
