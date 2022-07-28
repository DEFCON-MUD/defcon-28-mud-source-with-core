inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 19, 4 }));
  set_short( "Corridor - x51y19z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y20z4.c",
  "south" : DIR+"/rooms/x51y18z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
