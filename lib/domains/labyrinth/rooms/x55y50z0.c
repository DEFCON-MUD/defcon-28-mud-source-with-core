inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 0 }));
  set_short( "Corridor - x55y50z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y51z0.c",
  "south" : DIR+"/rooms/x55y49z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
