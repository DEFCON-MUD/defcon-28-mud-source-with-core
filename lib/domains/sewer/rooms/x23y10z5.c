inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 5 }));
  set_short( "Passage - x23y10z5" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "south" : DIR+"/rooms/x23y9z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
