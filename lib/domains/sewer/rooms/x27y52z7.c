inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 7 }));
  set_short( "Passage - x27y52z7" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z7.c",
  "east" : DIR+"/rooms/x28y52z7.c",
  "north" : DIR+"/rooms/x27y53z7.c",
  "south" : DIR+"/rooms/x27y51z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
