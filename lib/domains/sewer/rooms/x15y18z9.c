inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 9 }));
  set_short( "Passage - x15y18z9" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y19z9.c",
  "south" : DIR+"/rooms/x15y17z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
