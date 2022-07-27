inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 7, 4 }));
  set_short( "Passage - x7y7z4" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y8z4.c",
  "south" : DIR+"/rooms/x7y6z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
