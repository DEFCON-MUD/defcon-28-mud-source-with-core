inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 3 }));
  set_short( "Corridor - x19y48z3" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y49z3.c",
  "south" : DIR+"/rooms/x19y47z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
