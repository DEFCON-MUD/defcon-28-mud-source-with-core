inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 42, 1 }));
  set_short( "Hallway - x21y42z1" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y42z1.c",
  "east" : DIR+"/rooms/x22y42z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
