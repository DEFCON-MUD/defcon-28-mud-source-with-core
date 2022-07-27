inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 8 }));
  set_short( "Passage - x13y12z8" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y12z8.c",
  "east" : DIR+"/rooms/x14y12z8.c",
  "south" : DIR+"/rooms/x13y11z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
