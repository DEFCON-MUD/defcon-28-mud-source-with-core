inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 6 }));
  set_short( "Hallway - x51y36z6" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z6.c",
  "north" : DIR+"/rooms/x51y37z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
