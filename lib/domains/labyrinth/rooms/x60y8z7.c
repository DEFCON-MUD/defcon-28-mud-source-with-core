inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 8, 7 }));
  set_short( "Hallway - x60y8z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y8z7.c",
  "east" : DIR+"/rooms/x61y8z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
