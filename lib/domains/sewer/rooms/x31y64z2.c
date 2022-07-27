inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 2 }));
  set_short( "Passage - x31y64z2" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z2.c",
  "east" : DIR+"/rooms/x32y64z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
