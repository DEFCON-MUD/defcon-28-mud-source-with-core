inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 4 }));
  set_short( "Passage - x19y2z4" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z4.c",
  "east" : DIR+"/rooms/x20y2z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
