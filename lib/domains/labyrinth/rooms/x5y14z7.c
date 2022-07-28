inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 7 }));
  set_short( "Corridor - x5y14z7" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y14z7.c",
  "north" : DIR+"/rooms/x5y15z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
