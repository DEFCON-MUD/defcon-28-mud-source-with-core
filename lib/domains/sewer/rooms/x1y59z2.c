inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 59, 2 }));
  set_short( "Corridor - x1y59z2" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y60z2.c",
  "south" : DIR+"/rooms/x1y58z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
