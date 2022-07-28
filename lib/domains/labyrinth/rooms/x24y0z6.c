inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 0, 6 }));
  set_short( "Passage - x24y0z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y0z6.c",
  "east" : DIR+"/rooms/x25y0z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
