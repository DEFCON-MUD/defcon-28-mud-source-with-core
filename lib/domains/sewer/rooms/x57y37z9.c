inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 37, 9 }));
  set_short( "Hallway - x57y37z9" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y38z9.c",
  "south" : DIR+"/rooms/x57y36z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
