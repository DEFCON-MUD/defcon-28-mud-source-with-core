inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 2, 8 }));
  set_short( "Passage - x44y2z8" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y2z8.c",
  "east" : DIR+"/rooms/x45y2z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
