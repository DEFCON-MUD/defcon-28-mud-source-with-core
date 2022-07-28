inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 59, 3 }));
  set_short( "Hallway - x35y59z3" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y60z3.c",
  "south" : DIR+"/rooms/x35y58z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
