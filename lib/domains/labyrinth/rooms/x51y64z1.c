inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 1 }));
  set_short( "Passage - x51y64z1" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z1.c",
  "east" : DIR+"/rooms/x52y64z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
