inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 13, 8 }));
  set_short( "Hallway - x9y13z8" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y14z8.c",
  "south" : DIR+"/rooms/x9y12z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
