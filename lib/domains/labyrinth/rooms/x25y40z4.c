inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 4 }));
  set_short( "Hallway - x25y40z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y40z4.c",
  "south" : DIR+"/rooms/x25y39z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
