inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 9 }));
  set_short( "Passage - x45y20z9" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y20z9.c",
  "north" : DIR+"/rooms/x45y21z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
