inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 23, 3 }));
  set_short( "Hallway - x43y23z3" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y24z3.c",
  "south" : DIR+"/rooms/x43y22z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
