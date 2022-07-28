inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 7 }));
  set_short( "Corridor - x19y14z7" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y14z7.c",
  "east" : DIR+"/rooms/x20y14z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
