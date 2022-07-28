inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 0 }));
  set_short( "Passage - x59y14z0" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y15z0.c",
  "south" : DIR+"/rooms/x59y13z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
