inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 18, 5 }));
  set_short( "Corridor - x42y18z5" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y18z5.c",
  "east" : DIR+"/rooms/x43y18z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
