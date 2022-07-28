inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 7 }));
  set_short( "Passage - x18y0z7" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z7.c",
  "east" : DIR+"/rooms/x19y0z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
