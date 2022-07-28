inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 9 }));
  set_short( "Hallway - x25y8z9" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y8z9.c",
  "north" : DIR+"/rooms/x25y9z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
