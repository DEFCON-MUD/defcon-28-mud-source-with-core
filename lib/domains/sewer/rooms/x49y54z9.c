inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 9 }));
  set_short( "Corridor - x49y54z9" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y54z9.c",
  "south" : DIR+"/rooms/x49y53z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
