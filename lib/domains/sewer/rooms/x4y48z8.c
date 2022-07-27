inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 48, 8 }));
  set_short( "Passage - x4y48z8" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y48z8.c",
  "east" : DIR+"/rooms/x5y48z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
