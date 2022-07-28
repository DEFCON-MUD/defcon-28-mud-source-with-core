inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 4 }));
  set_short( "Corridor - x45y14z4" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y14z4.c",
  "north" : DIR+"/rooms/x45y15z4.c",
  "south" : DIR+"/rooms/x45y13z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
