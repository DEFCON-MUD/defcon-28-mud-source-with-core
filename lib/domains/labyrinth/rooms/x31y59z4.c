inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 59, 4 }));
  set_short( "Corridor - x31y59z4" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y60z4.c",
  "south" : DIR+"/rooms/x31y58z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
