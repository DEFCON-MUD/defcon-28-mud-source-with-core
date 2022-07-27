inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 0 }));
  set_short( "Hallway - x27y24z0" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y24z0.c",
  "south" : DIR+"/rooms/x27y23z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
