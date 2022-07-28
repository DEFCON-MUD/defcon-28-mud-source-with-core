inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 45, 5 }));
  set_short( "Hallway - x57y45z5" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y46z5.c",
  "south" : DIR+"/rooms/x57y44z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
