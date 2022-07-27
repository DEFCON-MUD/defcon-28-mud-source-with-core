inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 9 }));
  set_short( "Hallway - x9y47z9" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z9.c",
  "south" : DIR+"/rooms/x9y46z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
