inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 0 }));
  set_short( "Passage - x1y30z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y31z0.c",
  "south" : DIR+"/rooms/x1y29z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
