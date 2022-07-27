inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 5 }));
  set_short( "Hallway - x7y13z5" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z5.c",
  "south" : DIR+"/rooms/x7y12z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
