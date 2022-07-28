inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 4 }));
  set_short( "Hallway - x39y28z4" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y29z4.c",
  "south" : DIR+"/rooms/x39y27z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
