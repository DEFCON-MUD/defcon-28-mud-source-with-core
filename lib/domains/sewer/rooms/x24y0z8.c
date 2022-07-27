inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 0, 8 }));
  set_short( "Passage - x24y0z8" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y0z8.c",
  "east" : DIR+"/rooms/x25y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
