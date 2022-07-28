inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 0 }));
  set_short( "Corridor - x47y64z0" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z0.c",
  "east" : DIR+"/rooms/x48y64z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
