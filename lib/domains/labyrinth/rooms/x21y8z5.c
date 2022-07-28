inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 5 }));
  set_short( "Passage - x21y8z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y8z5.c",
  "north" : DIR+"/rooms/x21y9z5.c",
  "south" : DIR+"/rooms/x21y7z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
