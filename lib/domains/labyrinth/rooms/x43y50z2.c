inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 2 }));
  set_short( "Corridor - x43y50z2" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y50z2.c",
  "north" : DIR+"/rooms/x43y51z2.c",
  "south" : DIR+"/rooms/x43y49z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
