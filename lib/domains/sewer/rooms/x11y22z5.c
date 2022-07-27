inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 5 }));
  set_short( "Corridor - x11y22z5" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y22z5.c",
  "north" : DIR+"/rooms/x11y23z5.c",
  "south" : DIR+"/rooms/x11y21z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
