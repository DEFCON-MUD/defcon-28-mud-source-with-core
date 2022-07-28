inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 6 }));
  set_short( "Hallway - x31y26z6" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y26z6.c",
  "north" : DIR+"/rooms/x31y27z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
