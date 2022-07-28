inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 0, 2 }));
  set_short( "Passage - x34y0z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y0z2.c",
  "east" : DIR+"/rooms/x35y0z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
