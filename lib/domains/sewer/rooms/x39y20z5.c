inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 5 }));
  set_short( "Passage - x39y20z5" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y20z5.c",
  "east" : DIR+"/rooms/x40y20z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
