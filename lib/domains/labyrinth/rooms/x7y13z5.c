inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 5 }));
  set_short( "Hallway - x7y13z5" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z5.c",
  "south" : DIR+"/rooms/x7y12z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
