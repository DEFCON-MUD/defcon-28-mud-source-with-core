inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 27, 4 }));
  set_short( "Passage - x33y27z4" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y28z4.c",
  "south" : DIR+"/rooms/x33y26z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
