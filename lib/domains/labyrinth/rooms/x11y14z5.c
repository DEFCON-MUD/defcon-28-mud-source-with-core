inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 5 }));
  set_short( "Passage - x11y14z5" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y15z5.c",
  "south" : DIR+"/rooms/x11y13z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
