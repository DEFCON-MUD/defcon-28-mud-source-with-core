inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 6 }));
  set_short( "Passage - x57y42z6" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y42z6.c",
  "south" : DIR+"/rooms/x57y41z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
