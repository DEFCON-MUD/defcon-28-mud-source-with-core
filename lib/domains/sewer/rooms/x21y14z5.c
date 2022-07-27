inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 5 }));
  set_short( "Hallway - x21y14z5" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z5.c",
  "north" : DIR+"/rooms/x21y15z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
