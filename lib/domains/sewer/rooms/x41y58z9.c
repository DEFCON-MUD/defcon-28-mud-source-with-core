inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 9 }));
  set_short( "Hallway - x41y58z9" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y58z9.c",
  "north" : DIR+"/rooms/x41y59z9.c",
  "south" : DIR+"/rooms/x41y57z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
