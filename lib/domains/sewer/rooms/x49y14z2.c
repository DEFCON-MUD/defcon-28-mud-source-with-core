inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 2 }));
  set_short( "Corridor - x49y14z2" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y14z2.c",
  "south" : DIR+"/rooms/x49y13z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
