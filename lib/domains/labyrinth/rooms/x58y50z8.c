inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 50, 8 }));
  set_short( "Passage - x58y50z8" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y50z8.c",
  "east" : DIR+"/rooms/x59y50z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
