inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 0 }));
  set_short( "Corridor - x10y64z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z0.c",
  "east" : DIR+"/rooms/x11y64z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
