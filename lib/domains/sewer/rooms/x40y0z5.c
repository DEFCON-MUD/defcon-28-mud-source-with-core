inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 5 }));
  set_short( "Hallway - x40y0z5" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z5.c",
  "east" : DIR+"/rooms/x41y0z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
