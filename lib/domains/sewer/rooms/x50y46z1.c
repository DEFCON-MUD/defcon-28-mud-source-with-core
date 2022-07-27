inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 46, 1 }));
  set_short( "Hallway - x50y46z1" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y46z1.c",
  "east" : DIR+"/rooms/x51y46z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
