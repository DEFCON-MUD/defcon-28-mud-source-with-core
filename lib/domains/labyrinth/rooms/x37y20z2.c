inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 2 }));
  set_short( "Corridor - x37y20z2" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y20z2.c",
  "south" : DIR+"/rooms/x37y19z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
