inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 9 }));
  set_short( "Corridor - x9y0z9" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z9.c",
  "east" : DIR+"/rooms/x10y0z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
