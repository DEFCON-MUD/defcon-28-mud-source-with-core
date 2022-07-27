inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 49, 1 }));
  set_short( "Hallway - x21y49z1" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y50z1.c",
  "south" : DIR+"/rooms/x21y48z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
