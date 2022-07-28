inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 50, 5 }));
  set_short( "Corridor - x36y50z5" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y50z5.c",
  "east" : DIR+"/rooms/x37y50z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
