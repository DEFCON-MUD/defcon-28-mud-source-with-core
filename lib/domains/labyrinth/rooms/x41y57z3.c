inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 57, 3 }));
  set_short( "Hallway - x41y57z3" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y58z3.c",
  "south" : DIR+"/rooms/x41y56z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
