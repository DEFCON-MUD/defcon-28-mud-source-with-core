inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 5 }));
  set_short( "Passage - x11y22z5" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y22z5.c",
  "north" : DIR+"/rooms/x11y23z5.c",
  "south" : DIR+"/rooms/x11y21z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
