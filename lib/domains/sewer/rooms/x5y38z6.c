inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 6 }));
  set_short( "Hallway - x5y38z6" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y38z6.c",
  "south" : DIR+"/rooms/x5y37z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
