inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 2 }));
  set_short( "Passage - x31y36z2" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y36z2.c",
  "north" : DIR+"/rooms/x31y37z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
