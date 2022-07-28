inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 26, 1 }));
  set_short( "Corridor - x61y26z1" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y27z1.c",
  "south" : DIR+"/rooms/x61y25z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
