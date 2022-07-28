inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 0 }));
  set_short( "Passage - x27y8z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y8z0.c",
  "north" : DIR+"/rooms/x27y9z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
