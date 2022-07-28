inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 14, 4 }));
  set_short( "Hallway - x28y14z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y14z4.c",
  "east" : DIR+"/rooms/x29y14z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
