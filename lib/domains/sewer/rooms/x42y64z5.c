inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 5 }));
  set_short( "Hallway - x42y64z5" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z5.c",
  "east" : DIR+"/rooms/x43y64z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
