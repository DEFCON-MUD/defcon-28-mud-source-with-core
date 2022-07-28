inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 4 }));
  set_short( "Corridor - x23y28z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y28z4.c",
  "north" : DIR+"/rooms/x23y29z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
