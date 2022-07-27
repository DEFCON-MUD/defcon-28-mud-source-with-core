inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 35, 9 }));
  set_short( "Corridor - x15y35z9" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y36z9.c",
  "south" : DIR+"/rooms/x15y34z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
