inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 58, 2 }));
  set_short( "Corridor - x42y58z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y58z2.c",
  "east" : DIR+"/rooms/x43y58z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
