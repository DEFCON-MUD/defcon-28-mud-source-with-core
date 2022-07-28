inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 8 }));
  set_short( "Passage - x35y56z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y56z8.c",
  "north" : DIR+"/rooms/x35y57z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
