inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 13, 9 }));
  set_short( "Corridor - x13y13z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y14z9.c",
  "south" : DIR+"/rooms/x13y12z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
