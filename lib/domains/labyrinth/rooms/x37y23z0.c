inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 23, 0 }));
  set_short( "Hallway - x37y23z0" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y24z0.c",
  "south" : DIR+"/rooms/x37y22z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
