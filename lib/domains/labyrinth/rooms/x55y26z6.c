inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 6 }));
  set_short( "Corridor - x55y26z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z6.c",
  "south" : DIR+"/rooms/x55y25z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
