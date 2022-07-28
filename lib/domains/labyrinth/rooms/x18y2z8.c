inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 8 }));
  set_short( "Corridor - x18y2z8" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z8.c",
  "east" : DIR+"/rooms/x19y2z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
