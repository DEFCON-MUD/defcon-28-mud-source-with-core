inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 16, 1 }));
  set_short( "Hallway - x16y16z1" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y16z1.c",
  "east" : DIR+"/rooms/x17y16z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
