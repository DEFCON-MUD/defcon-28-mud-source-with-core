inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 8 }));
  set_short( "Passage - x37y2z8" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y2z8.c",
  "east" : DIR+"/rooms/x38y2z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
