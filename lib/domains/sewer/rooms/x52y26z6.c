inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 26, 6 }));
  set_short( "Hallway - x52y26z6" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y26z6.c",
  "east" : DIR+"/rooms/x53y26z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
