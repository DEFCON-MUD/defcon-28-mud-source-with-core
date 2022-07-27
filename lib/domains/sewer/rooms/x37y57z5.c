inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 57, 5 }));
  set_short( "Corridor - x37y57z5" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y58z5.c",
  "south" : DIR+"/rooms/x37y56z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
