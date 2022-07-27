inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 5 }));
  set_short( "Passage - x1y56z5" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y57z5.c",
  "south" : DIR+"/rooms/x1y55z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
