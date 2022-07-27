inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 1 }));
  set_short( "Passage - x35y42z1" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z1.c",
  "south" : DIR+"/rooms/x35y41z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
