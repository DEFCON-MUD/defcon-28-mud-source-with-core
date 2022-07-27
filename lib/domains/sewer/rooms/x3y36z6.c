inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 6 }));
  set_short( "Hallway - x3y36z6" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y36z6.c",
  "north" : DIR+"/rooms/x3y37z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
