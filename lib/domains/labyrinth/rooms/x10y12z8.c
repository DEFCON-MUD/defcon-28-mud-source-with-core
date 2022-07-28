inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 12, 8 }));
  set_short( "Passage - x10y12z8" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y12z8.c",
  "east" : DIR+"/rooms/x11y12z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
