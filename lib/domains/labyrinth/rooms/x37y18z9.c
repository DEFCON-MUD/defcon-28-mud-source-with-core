inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 9 }));
  set_short( "Corridor - x37y18z9" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y18z9.c",
  "east" : DIR+"/rooms/x38y18z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
