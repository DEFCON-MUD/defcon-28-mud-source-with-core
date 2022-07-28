inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 28, 3 }));
  set_short( "Corridor - x7y28z3" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y28z3.c",
  "east" : DIR+"/rooms/x8y28z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
