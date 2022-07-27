inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 48, 8 }));
  set_short( "Corridor - x2y48z8" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y48z8.c",
  "east" : DIR+"/rooms/x3y48z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
