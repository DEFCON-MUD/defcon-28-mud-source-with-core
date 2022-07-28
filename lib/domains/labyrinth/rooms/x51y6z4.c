inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 4 }));
  set_short( "Corridor - x51y6z4" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y6z4.c",
  "south" : DIR+"/rooms/x51y5z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
