inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 32, 3 }));
  set_short( "Passage - x15y32z3" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y33z3.c",
  "south" : DIR+"/rooms/x15y31z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
