inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 5 }));
  set_short( "Passage - x3y34z5" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y35z5.c",
  "south" : DIR+"/rooms/x3y33z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
