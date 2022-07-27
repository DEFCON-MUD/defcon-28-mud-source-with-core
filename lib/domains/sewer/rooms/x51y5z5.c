inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 5 }));
  set_short( "Corridor - x51y5z5" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z5.c",
  "south" : DIR+"/rooms/x51y4z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
