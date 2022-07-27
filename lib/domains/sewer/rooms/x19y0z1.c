inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 0, 1 }));
  set_short( "Hallway - x19y0z1" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y0z1.c",
  "east" : DIR+"/rooms/x20y0z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
