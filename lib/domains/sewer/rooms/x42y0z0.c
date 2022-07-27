inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 0, 0 }));
  set_short( "Hallway - x42y0z0" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y0z0.c",
  "east" : DIR+"/rooms/x43y0z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
