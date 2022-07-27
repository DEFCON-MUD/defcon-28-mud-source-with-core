inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 9 }));
  set_short( "Hallway - x31y14z9" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y14z9.c",
  "south" : DIR+"/rooms/x31y13z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
