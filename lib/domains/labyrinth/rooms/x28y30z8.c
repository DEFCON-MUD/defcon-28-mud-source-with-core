inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 30, 8 }));
  set_short( "Hallway - x28y30z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y30z8.c",
  "east" : DIR+"/rooms/x29y30z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
