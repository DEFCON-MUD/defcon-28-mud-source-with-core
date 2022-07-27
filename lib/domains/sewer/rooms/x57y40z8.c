inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 8 }));
  set_short( "Hallway - x57y40z8" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y40z8.c",
  "north" : DIR+"/rooms/x57y41z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
