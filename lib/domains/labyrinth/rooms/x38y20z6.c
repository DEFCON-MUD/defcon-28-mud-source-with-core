inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 20, 6 }));
  set_short( "Passage - x38y20z6" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y20z6.c",
  "east" : DIR+"/rooms/x39y20z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
