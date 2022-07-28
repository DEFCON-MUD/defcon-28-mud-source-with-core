inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 9 }));
  set_short( "Corridor - x43y36z9" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y36z9.c",
  "north" : DIR+"/rooms/x43y37z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
