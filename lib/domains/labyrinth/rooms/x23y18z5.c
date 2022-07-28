inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 5 }));
  set_short( "Hallway - x23y18z5" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y19z5.c",
  "south" : DIR+"/rooms/x23y17z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
