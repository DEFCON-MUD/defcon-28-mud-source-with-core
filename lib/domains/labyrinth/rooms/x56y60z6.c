inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 60, 6 }));
  set_short( "Corridor - x56y60z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y60z6.c",
  "east" : DIR+"/rooms/x57y60z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
