inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 41, 6 }));
  set_short( "Passage - x17y41z6" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y42z6.c",
  "south" : DIR+"/rooms/x17y40z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
