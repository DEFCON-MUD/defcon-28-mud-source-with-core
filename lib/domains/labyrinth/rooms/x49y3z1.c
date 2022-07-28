inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 3, 1 }));
  set_short( "Passage - x49y3z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y4z1.c",
  "south" : DIR+"/rooms/x49y2z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
