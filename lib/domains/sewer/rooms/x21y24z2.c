inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 2 }));
  set_short( "Hallway - x21y24z2" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y24z2.c",
  "north" : DIR+"/rooms/x21y25z2.c",
  "south" : DIR+"/rooms/x21y23z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
