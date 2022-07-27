inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 5 }));
  set_short( "Corridor - x5y10z5" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y10z5.c",
  "south" : DIR+"/rooms/x5y9z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
