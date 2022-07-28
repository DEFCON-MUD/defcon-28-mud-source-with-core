inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 3 }));
  set_short( "Corridor - x45y52z3" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y53z3.c",
  "south" : DIR+"/rooms/x45y51z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
