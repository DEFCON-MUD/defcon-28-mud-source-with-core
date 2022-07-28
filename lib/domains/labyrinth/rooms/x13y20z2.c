inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 2 }));
  set_short( "Hallway - x13y20z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y20z2.c",
  "south" : DIR+"/rooms/x13y19z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
