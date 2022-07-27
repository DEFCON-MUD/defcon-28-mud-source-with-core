inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 51, 4 }));
  set_short( "Corridor - x1y51z4" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y52z4.c",
  "south" : DIR+"/rooms/x1y50z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
