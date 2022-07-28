inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 4, 1 }));
  set_short( "Passage - x6y4z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y4z1.c",
  "east" : DIR+"/rooms/x7y4z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
