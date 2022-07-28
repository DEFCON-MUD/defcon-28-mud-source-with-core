inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 47, 4 }));
  set_short( "Hallway - x59y47z4" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y48z4.c",
  "south" : DIR+"/rooms/x59y46z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
