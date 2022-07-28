inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 6, 4 }));
  set_short( "Corridor - x33y6z4" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y6z4.c",
  "north" : DIR+"/rooms/x33y7z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
