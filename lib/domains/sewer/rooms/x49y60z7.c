inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 7 }));
  set_short( "Corridor - x49y60z7" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z7.c",
  "south" : DIR+"/rooms/x49y59z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
