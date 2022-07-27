inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 14, 7 }));
  set_short( "Passage - x18y14z7" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y14z7.c",
  "east" : DIR+"/rooms/x19y14z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
