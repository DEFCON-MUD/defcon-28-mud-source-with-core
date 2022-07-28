inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 17, 4 }));
  set_short( "Passage - x31y17z4" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y18z4.c",
  "south" : DIR+"/rooms/x31y16z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
