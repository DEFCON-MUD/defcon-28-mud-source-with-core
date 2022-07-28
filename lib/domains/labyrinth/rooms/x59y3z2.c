inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 3, 2 }));
  set_short( "Passage - x59y3z2" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y4z2.c",
  "south" : DIR+"/rooms/x59y2z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
