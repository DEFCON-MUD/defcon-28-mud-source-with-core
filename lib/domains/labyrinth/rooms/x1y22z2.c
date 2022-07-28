inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 2 }));
  set_short( "Corridor - x1y22z2" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y23z2.c",
  "south" : DIR+"/rooms/x1y21z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
