inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 52, 3 }));
  set_short( "Passage - x14y52z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y52z3.c",
  "east" : DIR+"/rooms/x15y52z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
