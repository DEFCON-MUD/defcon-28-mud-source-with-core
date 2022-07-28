inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 9 }));
  set_short( "Passage - x24y20z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z9.c",
  "east" : DIR+"/rooms/x25y20z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
