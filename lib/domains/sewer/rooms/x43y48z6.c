inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 6 }));
  set_short( "Passage - x43y48z6" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y48z6.c",
  "south" : DIR+"/rooms/x43y47z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
