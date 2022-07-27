inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 32, 6 }));
  set_short( "Passage - x43y32z6" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y32z6.c",
  "north" : DIR+"/rooms/x43y33z6.c",
  "south" : DIR+"/rooms/x43y31z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
