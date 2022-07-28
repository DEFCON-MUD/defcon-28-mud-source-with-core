inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 26, 3 }));
  set_short( "Passage - x29y26z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y26z3.c",
  "north" : DIR+"/rooms/x29y27z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
