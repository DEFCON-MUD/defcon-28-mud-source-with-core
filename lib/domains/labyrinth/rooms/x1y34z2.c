inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 34, 2 }));
  set_short( "Hallway - x1y34z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y34z2.c",
  "north" : DIR+"/rooms/x1y35z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
