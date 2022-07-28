inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 5 }));
  set_short( "Passage - x35y44z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "south" : DIR+"/rooms/x35y43z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
