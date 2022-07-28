inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 54, 3 }));
  set_short( "Passage - x37y54z3" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y54z3.c",
  "north" : DIR+"/rooms/x37y55z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
