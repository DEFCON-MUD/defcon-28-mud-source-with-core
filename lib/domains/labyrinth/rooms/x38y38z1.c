inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 38, 1 }));
  set_short( "Hallway - x38y38z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y38z1.c",
  "east" : DIR+"/rooms/x39y38z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
