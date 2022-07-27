inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 4 }));
  set_short( "Passage - x13y40z4" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y40z4.c",
  "north" : DIR+"/rooms/x13y41z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
