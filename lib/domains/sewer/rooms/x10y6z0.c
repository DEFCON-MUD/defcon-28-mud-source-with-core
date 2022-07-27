inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 6, 0 }));
  set_short( "Hallway - x10y6z0" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y6z0.c",
  "east" : DIR+"/rooms/x11y6z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
