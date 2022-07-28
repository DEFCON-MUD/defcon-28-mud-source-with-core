inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 1 }));
  set_short( "Corridor - x35y60z1" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y61z1.c",
  "south" : DIR+"/rooms/x35y59z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
