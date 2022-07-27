inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 8, 4 }));
  set_short( "Passage - x19y8z4" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y8z4.c",
  "north" : DIR+"/rooms/x19y9z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
