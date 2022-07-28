inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 8 }));
  set_short( "Corridor - x31y20z8" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y20z8.c",
  "north" : DIR+"/rooms/x31y21z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
