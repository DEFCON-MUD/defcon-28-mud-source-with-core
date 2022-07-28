inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 0 }));
  set_short( "Corridor - x37y60z0" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y61z0.c",
  "south" : DIR+"/rooms/x37y59z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
