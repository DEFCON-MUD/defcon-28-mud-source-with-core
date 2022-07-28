inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 1 }));
  set_short( "Hallway - x19y36z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y37z1.c",
  "south" : DIR+"/rooms/x19y35z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
