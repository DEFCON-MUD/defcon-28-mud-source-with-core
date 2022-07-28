inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 3 }));
  set_short( "Hallway - x27y28z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y29z3.c",
  "south" : DIR+"/rooms/x27y27z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
