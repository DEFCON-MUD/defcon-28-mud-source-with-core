inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 41, 7 }));
  set_short( "Passage - x35y41z7" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y42z7.c",
  "south" : DIR+"/rooms/x35y40z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
