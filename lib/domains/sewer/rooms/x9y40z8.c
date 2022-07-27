inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 8 }));
  set_short( "Passage - x9y40z8" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y40z8.c",
  "north" : DIR+"/rooms/x9y41z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
