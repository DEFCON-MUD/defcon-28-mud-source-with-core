inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 6, 1 }));
  set_short( "Hallway - x36y6z1" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y6z1.c",
  "east" : DIR+"/rooms/x37y6z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
