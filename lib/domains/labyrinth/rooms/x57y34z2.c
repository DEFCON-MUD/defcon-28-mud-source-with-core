inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 2 }));
  set_short( "Passage - x57y34z2" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y34z2.c",
  "north" : DIR+"/rooms/x57y35z2.c",
  "south" : DIR+"/rooms/x57y33z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
