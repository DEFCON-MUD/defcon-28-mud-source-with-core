inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 10, 6 }));
  set_short( "Passage - x22y10z6" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y10z6.c",
  "east" : DIR+"/rooms/x23y10z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
