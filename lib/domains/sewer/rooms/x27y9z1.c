inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 9, 1 }));
  set_short( "Hallway - x27y9z1" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y10z1.c",
  "south" : DIR+"/rooms/x27y8z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
