inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 9 }));
  set_short( "Corridor - x3y6z9" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y7z9.c",
  "south" : DIR+"/rooms/x3y5z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
