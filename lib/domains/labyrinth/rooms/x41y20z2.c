inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 2 }));
  set_short( "Hallway - x41y20z2" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y21z2.c",
  "south" : DIR+"/rooms/x41y19z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
