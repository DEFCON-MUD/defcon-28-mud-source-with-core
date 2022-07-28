inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 45, 5 }));
  set_short( "Hallway - x51y45z5" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y46z5.c",
  "south" : DIR+"/rooms/x51y44z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
