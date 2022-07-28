inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 2, 2 }));
  set_short( "Passage - x24y2z2" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y2z2.c",
  "east" : DIR+"/rooms/x25y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
