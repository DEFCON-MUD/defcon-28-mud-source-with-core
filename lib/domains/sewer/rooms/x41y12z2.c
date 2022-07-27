inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 12, 2 }));
  set_short( "Hallway - x41y12z2" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y12z2.c",
  "south" : DIR+"/rooms/x41y11z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
