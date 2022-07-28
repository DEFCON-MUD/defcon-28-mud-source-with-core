inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 39, 2 }));
  set_short( "Hallway - x17y39z2" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y40z2.c",
  "south" : DIR+"/rooms/x17y38z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
