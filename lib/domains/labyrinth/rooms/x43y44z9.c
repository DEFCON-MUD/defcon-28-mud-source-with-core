inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 9 }));
  set_short( "Hallway - x43y44z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y45z9.c",
  "south" : DIR+"/rooms/x43y43z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
