inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 60, 0 }));
  set_short( "Corridor - x32y60z0" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y60z0.c",
  "east" : DIR+"/rooms/x33y60z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
