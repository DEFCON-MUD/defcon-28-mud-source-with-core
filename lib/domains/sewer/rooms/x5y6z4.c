inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 4 }));
  set_short( "Hallway - x5y6z4" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y7z4.c",
  "south" : DIR+"/rooms/x5y5z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
