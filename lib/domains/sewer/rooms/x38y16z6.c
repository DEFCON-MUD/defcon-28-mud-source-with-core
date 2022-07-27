inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 16, 6 }));
  set_short( "Passage - x38y16z6" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y16z6.c",
  "east" : DIR+"/rooms/x39y16z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
