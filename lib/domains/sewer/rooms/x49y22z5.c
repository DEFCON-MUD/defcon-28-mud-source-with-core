inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 5 }));
  set_short( "Hallway - x49y22z5" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y22z5.c",
  "north" : DIR+"/rooms/x49y23z5.c",
  "south" : DIR+"/rooms/x49y21z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
