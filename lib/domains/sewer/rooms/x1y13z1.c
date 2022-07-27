inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 13, 1 }));
  set_short( "Passage - x1y13z1" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y14z1.c",
  "south" : DIR+"/rooms/x1y12z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
