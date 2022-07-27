inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 9 }));
  set_short( "Corridor - x54y60z9" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z9.c",
  "east" : DIR+"/rooms/x55y60z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
