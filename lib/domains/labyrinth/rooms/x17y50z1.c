inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 1 }));
  set_short( "Hallway - x17y50z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y50z1.c",
  "north" : DIR+"/rooms/x17y51z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
