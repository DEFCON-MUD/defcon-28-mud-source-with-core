inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 35, 0 }));
  set_short( "Hallway - x55y35z0" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y36z0.c",
  "south" : DIR+"/rooms/x55y34z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
