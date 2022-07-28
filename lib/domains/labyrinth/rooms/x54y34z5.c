inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 34, 5 }));
  set_short( "Hallway - x54y34z5" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y34z5.c",
  "east" : DIR+"/rooms/x55y34z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
