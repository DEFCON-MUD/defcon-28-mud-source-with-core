inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 60, 9 }));
  set_short( "Corridor - x24y60z9" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y60z9.c",
  "east" : DIR+"/rooms/x25y60z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
