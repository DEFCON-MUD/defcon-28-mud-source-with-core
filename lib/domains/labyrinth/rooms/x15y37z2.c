inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 37, 2 }));
  set_short( "Corridor - x15y37z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y38z2.c",
  "south" : DIR+"/rooms/x15y36z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
