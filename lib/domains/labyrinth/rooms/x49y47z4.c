inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 47, 4 }));
  set_short( "Passage - x49y47z4" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y48z4.c",
  "south" : DIR+"/rooms/x49y46z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
