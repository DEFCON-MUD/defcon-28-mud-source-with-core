inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 7 }));
  set_short( "Passage - x61y34z7" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y34z7.c",
  "south" : DIR+"/rooms/x61y33z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
