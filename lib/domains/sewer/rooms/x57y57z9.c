inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 57, 9 }));
  set_short( "Passage - x57y57z9" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y58z9.c",
  "south" : DIR+"/rooms/x57y56z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
