inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 28, 1 }));
  set_short( "Corridor - x40y28z1" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y28z1.c",
  "east" : DIR+"/rooms/x41y28z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
