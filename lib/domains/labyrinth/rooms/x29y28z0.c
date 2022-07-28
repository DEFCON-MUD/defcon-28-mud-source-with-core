inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 0 }));
  set_short( "Passage - x29y28z0" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z0.c",
  "south" : DIR+"/rooms/x29y27z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
