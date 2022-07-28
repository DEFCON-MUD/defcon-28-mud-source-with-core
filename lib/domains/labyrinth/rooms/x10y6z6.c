inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 6, 6 }));
  set_short( "Hallway - x10y6z6" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y6z6.c",
  "east" : DIR+"/rooms/x11y6z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
