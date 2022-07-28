inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 62, 5 }));
  set_short( "Corridor - x38y62z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y62z5.c",
  "east" : DIR+"/rooms/x39y62z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
