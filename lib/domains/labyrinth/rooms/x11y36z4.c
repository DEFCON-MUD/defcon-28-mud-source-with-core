inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 4 }));
  set_short( "Hallway - x11y36z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y36z4.c",
  "north" : DIR+"/rooms/x11y37z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
