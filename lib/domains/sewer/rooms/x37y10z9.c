inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 9 }));
  set_short( "Corridor - x37y10z9" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y10z9.c",
  "north" : DIR+"/rooms/x37y11z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
