inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 5 }));
  set_short( "Passage - x37y30z5" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y31z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
