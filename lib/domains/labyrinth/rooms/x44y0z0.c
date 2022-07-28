inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 0 }));
  set_short( "Passage - x44y0z0" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z0.c",
  "east" : DIR+"/rooms/x45y0z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
