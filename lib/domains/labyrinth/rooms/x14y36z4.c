inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 4 }));
  set_short( "Corridor - x14y36z4" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z4.c",
  "east" : DIR+"/rooms/x15y36z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
