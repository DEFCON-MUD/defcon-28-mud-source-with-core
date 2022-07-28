inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 22, 5 }));
  set_short( "Hallway - x22y22z5" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y22z5.c",
  "east" : DIR+"/rooms/x23y22z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
