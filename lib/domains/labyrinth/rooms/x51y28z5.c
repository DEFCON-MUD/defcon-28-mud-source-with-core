inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 28, 5 }));
  set_short( "Corridor - x51y28z5" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y28z5.c",
  "north" : DIR+"/rooms/x51y29z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
