inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 27, 7 }));
  set_short( "Hallway - x61y27z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y28z7.c",
  "south" : DIR+"/rooms/x61y26z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
