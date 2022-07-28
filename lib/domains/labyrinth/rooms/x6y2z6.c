inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 6 }));
  set_short( "Corridor - x6y2z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z6.c",
  "east" : DIR+"/rooms/x7y2z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
