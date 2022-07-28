inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 0 }));
  set_short( "Corridor - x8y18z0" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z0.c",
  "east" : DIR+"/rooms/x9y18z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
