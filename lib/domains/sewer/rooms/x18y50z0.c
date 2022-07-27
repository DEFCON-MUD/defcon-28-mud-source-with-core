inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 50, 0 }));
  set_short( "Corridor - x18y50z0" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y50z0.c",
  "east" : DIR+"/rooms/x19y50z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
