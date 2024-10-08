inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 6 }));
  set_short( "Hallway - x3y50z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y50z6.c",
  "south" : DIR+"/rooms/x3y49z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
