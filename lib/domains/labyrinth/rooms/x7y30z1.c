inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 1 }));
  set_short( "Passage - x7y30z1" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y31z1.c",
  "south" : DIR+"/rooms/x7y29z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
