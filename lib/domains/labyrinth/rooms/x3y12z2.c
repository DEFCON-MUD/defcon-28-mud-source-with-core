inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 2 }));
  set_short( "Corridor - x3y12z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y13z2.c",
  "south" : DIR+"/rooms/x3y11z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
