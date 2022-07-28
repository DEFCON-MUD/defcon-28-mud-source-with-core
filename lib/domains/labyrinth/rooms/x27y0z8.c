inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 8 }));
  set_short( "Passage - x27y0z8" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z8.c",
  "east" : DIR+"/rooms/x28y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
