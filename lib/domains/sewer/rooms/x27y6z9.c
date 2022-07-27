inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 9 }));
  set_short( "Passage - x27y6z9" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y6z9.c",
  "east" : DIR+"/rooms/x28y6z9.c",
  "north" : DIR+"/rooms/x27y7z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
