inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 32, 7 }));
  set_short( "Hallway - x18y32z7" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y32z7.c",
  "east" : DIR+"/rooms/x19y32z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
