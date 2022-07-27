inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 1 }));
  set_short( "Passage - x17y28z1" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z1.c",
  "east" : DIR+"/rooms/x18y28z1.c",
  "north" : DIR+"/rooms/x17y29z1.c",
  "south" : DIR+"/rooms/x17y27z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
