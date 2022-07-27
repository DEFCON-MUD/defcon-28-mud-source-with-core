inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 8 }));
  set_short( "Corridor - x47y29z8" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z8.c",
  "south" : DIR+"/rooms/x47y28z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
