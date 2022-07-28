inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 11, 9 }));
  set_short( "Passage - x9y11z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y12z9.c",
  "south" : DIR+"/rooms/x9y10z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
