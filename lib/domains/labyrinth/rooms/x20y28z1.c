inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 28, 1 }));
  set_short( "Corridor - x20y28z1" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y28z1.c",
  "east" : DIR+"/rooms/x21y28z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
