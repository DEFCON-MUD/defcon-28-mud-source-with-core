inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 5 }));
  set_short( "Passage - x15y62z5" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y62z5.c",
  "east" : DIR+"/rooms/x16y62z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
