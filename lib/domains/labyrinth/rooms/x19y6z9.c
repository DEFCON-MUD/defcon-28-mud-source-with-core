inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 9 }));
  set_short( "Hallway - x19y6z9" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y6z9.c",
  "south" : DIR+"/rooms/x19y5z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
