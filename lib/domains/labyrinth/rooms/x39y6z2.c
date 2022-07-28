inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 6, 2 }));
  set_short( "Corridor - x39y6z2" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y6z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
