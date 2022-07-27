inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 1 }));
  set_short( "Hallway - x31y62z1" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y63z1.c",
  "south" : DIR+"/rooms/x31y61z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
