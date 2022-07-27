inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 7 }));
  set_short( "Hallway - x53y17z7" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z7.c",
  "south" : DIR+"/rooms/x53y16z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
