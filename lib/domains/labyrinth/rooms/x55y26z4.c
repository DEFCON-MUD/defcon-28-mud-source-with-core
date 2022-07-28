inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 4 }));
  set_short( "Hallway - x55y26z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z4.c",
  "south" : DIR+"/rooms/x55y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
