inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 50, 7 }));
  set_short( "Passage - x52y50z7" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y50z7.c",
  "east" : DIR+"/rooms/x53y50z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
