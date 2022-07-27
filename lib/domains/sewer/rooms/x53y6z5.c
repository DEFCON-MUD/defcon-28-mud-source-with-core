inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 5 }));
  set_short( "Corridor - x53y6z5" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y6z5.c",
  "north" : DIR+"/rooms/x53y7z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
