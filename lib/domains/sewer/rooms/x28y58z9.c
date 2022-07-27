inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 58, 9 }));
  set_short( "Hallway - x28y58z9" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y58z9.c",
  "east" : DIR+"/rooms/x29y58z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
