inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 2 }));
  set_short( "Passage - x10y64z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z2.c",
  "east" : DIR+"/rooms/x11y64z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
