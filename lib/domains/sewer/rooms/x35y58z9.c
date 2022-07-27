inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 58, 9 }));
  set_short( "Corridor - x35y58z9" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y58z9.c",
  "south" : DIR+"/rooms/x35y57z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
