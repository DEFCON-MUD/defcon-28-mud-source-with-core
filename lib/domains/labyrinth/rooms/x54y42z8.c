inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 42, 8 }));
  set_short( "Corridor - x54y42z8" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y42z8.c",
  "east" : DIR+"/rooms/x55y42z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
