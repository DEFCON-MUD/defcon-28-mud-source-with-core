inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 8 }));
  set_short( "Passage - x51y9z8" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z8.c",
  "south" : DIR+"/rooms/x51y8z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
