inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 1 }));
  set_short( "Corridor - x37y24z1" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y24z1.c",
  "north" : DIR+"/rooms/x37y25z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
