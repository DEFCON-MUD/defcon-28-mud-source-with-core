inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 4, 4 }));
  set_short( "Hallway - x1y4z4" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y5z4.c",
  "south" : DIR+"/rooms/x1y3z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
