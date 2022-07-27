inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 7 }));
  set_short( "Corridor - x17y38z7" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y38z7.c",
  "north" : DIR+"/rooms/x17y39z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
