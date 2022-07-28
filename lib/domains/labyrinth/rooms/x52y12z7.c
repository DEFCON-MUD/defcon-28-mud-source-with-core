inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 12, 7 }));
  set_short( "Hallway - x52y12z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y12z7.c",
  "east" : DIR+"/rooms/x53y12z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
