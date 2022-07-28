inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 23, 6 }));
  set_short( "Hallway - x17y23z6" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y24z6.c",
  "south" : DIR+"/rooms/x17y22z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
