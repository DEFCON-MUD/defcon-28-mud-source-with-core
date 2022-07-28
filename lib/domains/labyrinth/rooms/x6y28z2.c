inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 28, 2 }));
  set_short( "Corridor - x6y28z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y28z2.c",
  "east" : DIR+"/rooms/x7y28z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
