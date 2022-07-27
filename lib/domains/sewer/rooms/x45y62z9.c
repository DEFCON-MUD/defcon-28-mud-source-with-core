inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 62, 9 }));
  set_short( "Hallway - x45y62z9" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y62z9.c",
  "east" : DIR+"/rooms/x46y62z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
