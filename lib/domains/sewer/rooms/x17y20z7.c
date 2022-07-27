inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 7 }));
  set_short( "Corridor - x17y20z7" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y20z7.c",
  "east" : DIR+"/rooms/x18y20z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
