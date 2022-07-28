inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 28, 6 }));
  set_short( "Hallway - x7y28z6" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y28z6.c",
  "north" : DIR+"/rooms/x7y29z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
