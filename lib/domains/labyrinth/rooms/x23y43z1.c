inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 43, 1 }));
  set_short( "Hallway - x23y43z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y44z1.c",
  "south" : DIR+"/rooms/x23y42z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
