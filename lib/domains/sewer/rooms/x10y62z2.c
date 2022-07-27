inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 62, 2 }));
  set_short( "Passage - x10y62z2" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y62z2.c",
  "east" : DIR+"/rooms/x11y62z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
