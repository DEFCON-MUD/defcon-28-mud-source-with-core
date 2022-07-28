inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 60, 6 }));
  set_short( "Hallway - x2y60z6" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y60z6.c",
  "east" : DIR+"/rooms/x3y60z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
