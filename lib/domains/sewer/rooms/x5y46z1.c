inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 1 }));
  set_short( "Hallway - x5y46z1" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y46z1.c",
  "south" : DIR+"/rooms/x5y45z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
