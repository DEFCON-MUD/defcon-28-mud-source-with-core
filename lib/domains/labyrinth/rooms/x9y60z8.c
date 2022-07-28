inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 8 }));
  set_short( "Hallway - x9y60z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y61z8.c",
  "south" : DIR+"/rooms/x9y59z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
