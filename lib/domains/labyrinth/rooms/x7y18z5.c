inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 5 }));
  set_short( "Corridor - x7y18z5" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y19z5.c",
  "south" : DIR+"/rooms/x7y17z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
