inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 1 }));
  set_short( "Hallway - x27y50z1" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y50z1.c",
  "south" : DIR+"/rooms/x27y49z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
