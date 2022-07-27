inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 7 }));
  set_short( "Hallway - x7y52z7" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y52z7.c",
  "south" : DIR+"/rooms/x7y51z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
