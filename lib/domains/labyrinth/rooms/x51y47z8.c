inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 47, 8 }));
  set_short( "Passage - x51y47z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y48z8.c",
  "south" : DIR+"/rooms/x51y46z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
