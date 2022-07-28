inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 9 }));
  set_short( "Hallway - x55y41z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z9.c",
  "south" : DIR+"/rooms/x55y40z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
