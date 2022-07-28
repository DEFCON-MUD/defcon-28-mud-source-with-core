inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 8 }));
  set_short( "Corridor - x53y0z8" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z8.c",
  "east" : DIR+"/rooms/x54y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
