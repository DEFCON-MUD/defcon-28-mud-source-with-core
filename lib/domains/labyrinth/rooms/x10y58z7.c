inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 58, 7 }));
  set_short( "Passage - x10y58z7" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y58z7.c",
  "east" : DIR+"/rooms/x11y58z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
