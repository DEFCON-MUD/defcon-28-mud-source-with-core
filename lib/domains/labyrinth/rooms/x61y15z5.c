inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 15, 5 }));
  set_short( "Corridor - x61y15z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y16z5.c",
  "south" : DIR+"/rooms/x61y14z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
