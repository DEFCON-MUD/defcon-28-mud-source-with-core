inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 11, 2 }));
  set_short( "Hallway - x59y11z2" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y12z2.c",
  "south" : DIR+"/rooms/x59y10z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
