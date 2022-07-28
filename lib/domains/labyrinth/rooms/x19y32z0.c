inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 0 }));
  set_short( "Hallway - x19y32z0" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y32z0.c",
  "north" : DIR+"/rooms/x19y33z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
