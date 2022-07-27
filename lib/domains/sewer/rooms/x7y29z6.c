inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 29, 6 }));
  set_short( "Hallway - x7y29z6" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y30z6.c",
  "south" : DIR+"/rooms/x7y28z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
