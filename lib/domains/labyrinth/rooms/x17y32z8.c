inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 8 }));
  set_short( "Passage - x17y32z8" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y33z8.c",
  "south" : DIR+"/rooms/x17y31z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
