inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 5 }));
  set_short( "Corridor - x45y13z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z5.c",
  "south" : DIR+"/rooms/x45y12z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
