inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 3 }));
  set_short( "Hallway - x41y28z3" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z3.c",
  "south" : DIR+"/rooms/x41y27z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
