inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 14, 8 }));
  set_short( "Passage - x16y14z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y14z8.c",
  "east" : DIR+"/rooms/x17y14z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
