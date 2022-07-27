inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 4 }));
  set_short( "Passage - x59y42z4" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y42z4.c",
  "north" : DIR+"/rooms/x59y43z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
