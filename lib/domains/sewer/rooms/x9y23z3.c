inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 23, 3 }));
  set_short( "Hallway - x9y23z3" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y24z3.c",
  "south" : DIR+"/rooms/x9y22z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
