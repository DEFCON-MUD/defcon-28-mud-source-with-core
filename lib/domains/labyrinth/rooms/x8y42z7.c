inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 42, 7 }));
  set_short( "Passage - x8y42z7" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y42z7.c",
  "east" : DIR+"/rooms/x9y42z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
