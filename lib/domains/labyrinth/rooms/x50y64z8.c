inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 8 }));
  set_short( "Passage - x50y64z8" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z8.c",
  "east" : DIR+"/rooms/x51y64z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
