inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 7 }));
  set_short( "Hallway - x1y18z7" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z7.c",
  "south" : DIR+"/rooms/x1y17z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
