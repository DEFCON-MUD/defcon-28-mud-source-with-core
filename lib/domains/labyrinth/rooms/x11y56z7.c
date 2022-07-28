inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 7 }));
  set_short( "Passage - x11y56z7" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y56z7.c",
  "south" : DIR+"/rooms/x11y55z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
