inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 3 }));
  set_short( "Corridor - x29y44z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y45z3.c",
  "south" : DIR+"/rooms/x29y43z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
