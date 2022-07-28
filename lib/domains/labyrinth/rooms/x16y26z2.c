inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 26, 2 }));
  set_short( "Hallway - x16y26z2" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y26z2.c",
  "east" : DIR+"/rooms/x17y26z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
