inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 6 }));
  set_short( "Passage - x11y32z6" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y32z6.c",
  "south" : DIR+"/rooms/x11y31z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
