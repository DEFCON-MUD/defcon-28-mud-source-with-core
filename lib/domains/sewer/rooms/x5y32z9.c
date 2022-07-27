inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 9 }));
  set_short( "Passage - x5y32z9" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y32z9.c",
  "south" : DIR+"/rooms/x5y31z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
