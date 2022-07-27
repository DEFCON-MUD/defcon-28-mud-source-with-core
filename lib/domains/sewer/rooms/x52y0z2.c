inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 0, 2 }));
  set_short( "Corridor - x52y0z2" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y0z2.c",
  "east" : DIR+"/rooms/x53y0z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
