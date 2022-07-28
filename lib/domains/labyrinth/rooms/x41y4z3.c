inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 3 }));
  set_short( "Hallway - x41y4z3" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y4z3.c",
  "south" : DIR+"/rooms/x41y3z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
