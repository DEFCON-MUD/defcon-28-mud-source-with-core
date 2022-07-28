inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 12, 6 }));
  set_short( "Corridor - x31y12z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y13z6.c",
  "south" : DIR+"/rooms/x31y11z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
