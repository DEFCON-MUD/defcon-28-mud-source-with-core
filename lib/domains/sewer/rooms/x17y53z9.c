inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 53, 9 }));
  set_short( "Passage - x17y53z9" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y54z9.c",
  "south" : DIR+"/rooms/x17y52z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
