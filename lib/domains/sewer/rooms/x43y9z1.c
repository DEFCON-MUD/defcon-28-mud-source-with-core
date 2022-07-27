inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 9, 1 }));
  set_short( "Passage - x43y9z1" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y10z1.c",
  "south" : DIR+"/rooms/x43y8z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
