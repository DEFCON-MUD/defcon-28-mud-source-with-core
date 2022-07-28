inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 2 }));
  set_short( "Corridor - x42y64z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z2.c",
  "east" : DIR+"/rooms/x43y64z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
