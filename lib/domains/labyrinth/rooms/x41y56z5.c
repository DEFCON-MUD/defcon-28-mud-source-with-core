inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 5 }));
  set_short( "Corridor - x41y56z5" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z5.c",
  "north" : DIR+"/rooms/x41y57z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
