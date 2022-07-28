inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 1 }));
  set_short( "Passage - x7y13z1" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z1.c",
  "south" : DIR+"/rooms/x7y12z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
