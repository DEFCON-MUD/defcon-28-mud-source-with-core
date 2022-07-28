inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 22, 5 }));
  set_short( "Passage - x46y22z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y22z5.c",
  "east" : DIR+"/rooms/x47y22z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
