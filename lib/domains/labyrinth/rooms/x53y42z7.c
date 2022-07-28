inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 7 }));
  set_short( "Corridor - x53y42z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y42z7.c",
  "south" : DIR+"/rooms/x53y41z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
