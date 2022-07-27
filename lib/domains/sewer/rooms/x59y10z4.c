inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 10, 4 }));
  set_short( "Passage - x59y10z4" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y11z4.c",
  "south" : DIR+"/rooms/x59y9z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
