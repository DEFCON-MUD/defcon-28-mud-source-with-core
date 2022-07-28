inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 21, 3 }));
  set_short( "Corridor - x29y21z3" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y22z3.c",
  "south" : DIR+"/rooms/x29y20z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
