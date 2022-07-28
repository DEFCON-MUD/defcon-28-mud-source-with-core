inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 21, 1 }));
  set_short( "Corridor - x11y21z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y22z1.c",
  "south" : DIR+"/rooms/x11y20z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
