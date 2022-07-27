inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 8 }));
  set_short( "Passage - x61y10z8" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y11z8.c",
  "south" : DIR+"/rooms/x61y9z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
