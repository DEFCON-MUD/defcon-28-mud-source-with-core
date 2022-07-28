inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 7 }));
  set_short( "Corridor - x21y22z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y22z7.c",
  "north" : DIR+"/rooms/x21y23z7.c",
  "south" : DIR+"/rooms/x21y21z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
