inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 37, 2 }));
  set_short( "Hallway - x39y37z2" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y38z2.c",
  "south" : DIR+"/rooms/x39y36z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
