inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 6 }));
  set_short( "Corridor - x11y32z6" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y32z6.c",
  "south" : DIR+"/rooms/x11y31z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
