inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 8 }));
  set_short( "Corridor - x25y38z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y38z8.c",
  "east" : DIR+"/rooms/x26y38z8.c",
  "north" : DIR+"/rooms/x25y39z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
