inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 7 }));
  set_short( "Corridor - x21y22z7" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y22z7.c",
  "north" : DIR+"/rooms/x21y23z7.c",
  "south" : DIR+"/rooms/x21y21z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
