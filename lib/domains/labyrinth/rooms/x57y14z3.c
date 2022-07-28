inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 3 }));
  set_short( "Hallway - x57y14z3" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y14z3.c",
  "east" : DIR+"/rooms/x58y14z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
