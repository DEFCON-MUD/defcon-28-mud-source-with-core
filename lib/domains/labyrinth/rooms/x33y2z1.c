inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 1 }));
  set_short( "Corridor - x33y2z1" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y2z1.c",
  "east" : DIR+"/rooms/x34y2z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
