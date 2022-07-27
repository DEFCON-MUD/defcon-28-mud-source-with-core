inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 7 }));
  set_short( "Hallway - x11y23z7" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z7.c",
  "south" : DIR+"/rooms/x11y22z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
