inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 2 }));
  set_short( "Passage - x49y26z2" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y26z2.c",
  "north" : DIR+"/rooms/x49y27z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
