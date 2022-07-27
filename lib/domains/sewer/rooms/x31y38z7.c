inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 38, 7 }));
  set_short( "Corridor - x31y38z7" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y39z7.c",
  "south" : DIR+"/rooms/x31y37z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
