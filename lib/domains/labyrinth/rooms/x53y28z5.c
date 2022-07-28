inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 28, 5 }));
  set_short( "Hallway - x53y28z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y28z5.c",
  "south" : DIR+"/rooms/x53y27z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
