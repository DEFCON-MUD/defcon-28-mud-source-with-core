inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 7 }));
  set_short( "Passage - x7y0z7" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z7.c",
  "east" : DIR+"/rooms/x8y0z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
