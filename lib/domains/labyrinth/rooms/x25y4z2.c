inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 2 }));
  set_short( "Corridor - x25y4z2" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y4z2.c",
  "east" : DIR+"/rooms/x26y4z2.c",
  "north" : DIR+"/rooms/x25y5z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
