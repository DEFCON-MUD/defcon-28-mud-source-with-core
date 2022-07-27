inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 51, 7 }));
  set_short( "Corridor - x53y51z7" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y52z7.c",
  "south" : DIR+"/rooms/x53y50z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
