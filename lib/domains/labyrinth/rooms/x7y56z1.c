inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 1 }));
  set_short( "Corridor - x7y56z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y57z1.c",
  "south" : DIR+"/rooms/x7y55z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
