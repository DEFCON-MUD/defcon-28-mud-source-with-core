inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 3 }));
  set_short( "Corridor - x36y2z3" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z3.c",
  "east" : DIR+"/rooms/x37y2z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
