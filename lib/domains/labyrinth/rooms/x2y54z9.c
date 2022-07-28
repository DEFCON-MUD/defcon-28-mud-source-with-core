inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 54, 9 }));
  set_short( "Passage - x2y54z9" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y54z9.c",
  "east" : DIR+"/rooms/x3y54z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
