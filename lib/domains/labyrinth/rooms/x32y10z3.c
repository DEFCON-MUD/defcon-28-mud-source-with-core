inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 10, 3 }));
  set_short( "Hallway - x32y10z3" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y10z3.c",
  "east" : DIR+"/rooms/x33y10z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
