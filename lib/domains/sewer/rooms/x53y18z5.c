inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 5 }));
  set_short( "Corridor - x53y18z5" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y18z5.c",
  "south" : DIR+"/rooms/x53y17z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
